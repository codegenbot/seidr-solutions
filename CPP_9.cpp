#include <iostream>
#include <vector>
#include <cassert>

vector<int> rolling_max(const vector<int>& numbers);

bool issame(const vector<int>& a, const vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

vector<int> rolling_max(const vector<int>& numbers) {
    vector<int> result;
    int max_num = INT_MIN;
    
    for (int i = 0; i < numbers.size(); ++i) {
        max_num = max(max_num, numbers[i]);
        result.push_back(max_num);
    }
    
    return result;
}

int main() {
    // Test cases
    vector<int> test1 = {1, 2, 3, 4, 5};
    vector<int> test2 = {5, 4, 3, 2, 1};
    
    vector<int> result1 = rolling_max(test1);
    vector<int> result2 = rolling_max(test2);
    
    assert(issame(result1, {1, 2, 3, 4, 5}));
    assert(issame(result2, {5, 5, 5, 5, 5}));
    
    std::cout << "All test cases passed." << std::endl;
    
    return 0;
}