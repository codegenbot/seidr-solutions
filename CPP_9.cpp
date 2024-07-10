#include <iostream>
#include <vector>
#include <cassert>

vector<int> rolling_max(vector<int> numbers);

int main() {
    assert(rolling_max({3, 2, 3, 100, 3}) == vector<int>({3, 3, 3, 100, 100}));
    return 0;
}

vector<int> rolling_max(vector<int> numbers) {
    vector<int> result;
    int n = numbers.size();
    for (int i = 0; i < n; ++i) {
        int max_val = numbers[i];
        for (int j = i + 1; j < n; ++j) {
            if (numbers[j] > max_val) {
                max_val = numbers[j];
            }
        }
        result.push_back(max_val);
    }
    return result;
}