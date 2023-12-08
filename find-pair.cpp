#include <vector>
#include <unordered_set>
using namespace std;

vector<int> findPair(vector<int>& nums, int target) {
    unordered_set<int> complement;
    int firstNum = 0;
    for (int num : nums) {
        int complementNum = target - num;
        if (complement.count(complementNum) > 0) {
            return vector<int>{firstNum, complementNum};
        }
        complement.insert(num);
        firstNum = num;
    }
    return vector<int>();
}