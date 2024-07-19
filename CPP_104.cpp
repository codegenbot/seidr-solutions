#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    return unordered_set<int>(a.begin(), a.end()) == unordered_set<int>(b.begin(), b.end());
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
    vector<int> x = {123, 456, 789};
    vector<int> unique = unique_digits(x);
    return 0;
}