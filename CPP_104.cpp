#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
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
    // Sample test
    vector<int> input = {123, 456, 789, 246};
    vector<int> output = unique_digits(input);
    for (int num : output) {
        cout << num << " ";
    }
    cout << endl;

    // Additional test for issame function
    vector<int> a = {1, 2, 3};
    vector<int> b = {3, 2, 1};
    cout << issame(a, b) << endl;

    return 0;
}