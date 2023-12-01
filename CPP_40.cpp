#include <iostream>
#include <vector>
#include <unordered_set>

bool triples_sum_to_zero(vector<int> l) {
    unordered_set<int> nums;
    
    for (int i = 0; i < l.size(); i++) {
        for (int j = i + 1; j < l.size(); j++) {
            int target = -(l[i] + l[j]);
            
            if (nums.count(target) > 0)
                return true;
            
            nums.insert(l[j]);
        }
    }
    
    return false;
}

int main() {
    // test cases
    vector<vector<int>> test_cases = {
        {1, 3, 5, 0},
        {1, 3, -2, 1},
        {1, 2, 3, 7},
        {2, 4, -5, 3, 9, 7},
        {1}
    };
    
    for (auto test_case : test_cases) {
        cout << boolalpha << triples_sum_to_zero(test_case) << endl;
    }
    
    return 0;
}