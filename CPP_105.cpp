#include <vector>
#include <string>
#include <map>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

vector<string> by_length(vector<int> arr) {
    vector<int> nums;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            nums.push_back(num);
        }
    }
    
    sort(nums.begin(), nums.end());
    
    reverse(nums.begin(), nums.end());
    
    vector<string> result;
    map<int, string> numberNames = {{1, "One"}, {2, "Two"}, {3, "Three"}, 
                                     {4, "Four"}, {5, "Five"}, {6, "Six"}, 
                                     {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};
    
    for (int num : nums) {
        result.push_back(numberNames[num]);
    }
    
    return result;
}

int main() {
    assert(issame(by_length({9, 4, 8}) , {"Nine", "Four", "Eight"}));
    return 0;
}