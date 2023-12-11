#include <iostream>
#include <vector>
using namespace std;
/*
Given a vector of integers, return the two elements that sum to a target integer.
For example,
input:
2
5 7
12
output:
5
7
input:
2
2500 6352
8852
output:
2500
6352
input:
2
-14 5
-9
output:
-14
5
input:
2
40 -19
21
output:
40
-19
input:
2
-4 4
0
output:
-4
4
*/
vector<int> findPair(vector<int>& nums, int target) {
    vector<int> result;
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                result.push_back(nums[i]);
                result.push_back(nums[j]);
                return result;
            }
        }
    }
    return result;
}
int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5};
    int target = 7;
    std::cout << "The two elements that sum to " << target << " are: ";
    std::vector<int> result = findPair(nums, target);
    for (auto it : result) {
        std::cout << it << " ";
    }
    return 0;
}