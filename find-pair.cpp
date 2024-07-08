#include <iostream>
#include <vector>

using namespace std;

vector<int> findPair(vector<int>& nums, int target) {
    vector<int> result;
    sort(nums.begin(), nums.end());
    
    auto it = nums.begin();
    while (it + 1 != nums.end()) {
        if (*it + *(it+1) == target) {
            result.push_back(*it);
            result.push_back(*(it+1));
            break;
        }
        else if (*it + *(it+1) < target) {
            it++;
        } else {
            it++;
        }
    }
    
    return result;
}

int main() {
    int nums[] = {1, 2, 3, 4, 5};
    vector<int> v(nums, nums+5);
    int target = 9;
    vector<int> result = findPair(v, target);
    
    for (int i: result) {
        cout << i << " ";
    }
    
    return 0;
}