#include <vector>
#include <iostream>
using namespace std;
vector<int> find_pair(const vector<int>& nums, int target) {
   for (int i = 0; i < nums.size(); ++i) {
      const int complement = target - nums[i];
      if (complement >= 0 && complement < nums.size() && nums[complement] == nums[i]) {
         return vector<int>({nums[i], nums[complement]});
      }
   }
   return vector<int>();
}

int main() {
   const vector<int> nums = {5, 7};
   int target = 12;
   const vector<int> result = find_pair(nums, target);
   cout << "The two elements that sum to the target are: ";
   for (const int& num : result) {
      cout << num << ", ";
   }
   return 0;
}