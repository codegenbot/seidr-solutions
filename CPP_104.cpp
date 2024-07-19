#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
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

vector<int> unique_digits(vector<int> x) {
    vector<int> result;
    for (int num : x) {
        int temp = num;
        bool has_even_digit = false;
        while (temp > 0) {
            int digit = temp % 10;
            if (digit % 2 == 0) {
                has_even_digit = true;
                break;
            }
            temp /= 10;
        }
        if (!has_even_digit) {
            result.push_back(num);
        }
    }
    sort(result.begin(), result.end());
    return result;
}

int main() {
    vector<int> input = {123, 456, 789, 246};
    vector<int> output = unique_digits(input);

    // Test the issame function
    vector<int> test1 = {1, 2, 3};
    vector<int> test2 = {1, 2, 3};
    vector<int> test3 = {1, 2, 4};
    bool test_result1 = issame(test1, test2); // should return true
    bool test_result2 = issame(test1, test3); // should return false

    return 0;
}