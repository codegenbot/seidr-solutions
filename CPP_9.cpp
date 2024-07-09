#include <vector>
#include <iostream>
#include <cassert>

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
    vector<int> numbers = {1, 3, 5, 2, 8, 7};
    vector<int> result = rolling_max(numbers);
    
    assert(issame(result, {1, 3, 5, 5, 8, 8}));
    
    return 0;
}