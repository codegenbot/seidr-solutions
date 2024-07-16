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
        bool hasUniqueDigits = true;
        int temp = num;
        vector<int> digits(10, 0);
        while (temp > 0) {
            int digit = temp % 10;
            digits[digit]++;
            if (digits[digit] > 1) {
                hasUniqueDigits = false;
                break;
            }
            temp /= 10;
        }
        if (hasUniqueDigits) {
            result.push_back(num);
        }
    }
    sort(result.begin(), result.end());
    return result;
}