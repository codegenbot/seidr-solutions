#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> get_odd_collatz(int n) {
    vector<int> result;
    while (n != 1) {
        result.push_back(n);
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
    }
    result.push_back(1);
    
    vector<int> odd_numbers;
    for (int num : result) {
        if (num % 2 != 0) {
            odd_numbers.push_back(num);
        }
    }
    
    sort(odd_numbers.begin(), odd_numbers.end());
    
    return odd_numbers;
}

int main() {
    vector<int> test_input = {5, 10, 15, 20};
    vector<vector<int>> expected_output = {{1, 3, 5}, {1, 3, 5}, {1, 3, 5, 7, 9, 15}, {1, 3, 5}};

    for (int i = 0; i < test_input.size(); ++i) {
        vector<int> output = get_odd_collatz(test_input[i]);
        assert(output == expected_output[i]);
    }

    return 0;
}