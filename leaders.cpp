#include <vector>
using namespace std;

vector<int> findLeaders(vector<int> nums) {
  vector<int> leaders;
  int maxRight = INT_MIN; // Initialize the rightmost element

  // Iterate the numbers in reverse order
  for (int i = nums.size() - 1; i >= 0; i--) {
    if (nums[i] >= maxRight) {
      leaders.push_back(nums[i]);
      maxRight = nums[i]; // Update the maximum right element
    }
  }

  reverse(leaders.begin(), leaders.end()); // Reverse the leaders vector since we iterated in reverse order

  return leaders;
}