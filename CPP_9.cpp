#include <vector>
#include <iostream>
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
    vector<int> test1 = {1, 3, 4, 2, 5};
    vector<int> test2 = {1, 3, 4, 2, 5};
    assert(issame(test1, test2));

    vector<int> result = rolling_max(test1);
    for (int num : result) {
        std::cout << num << " ";
    }

    return 0;
}