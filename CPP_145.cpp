#include <algorithm>
#include <vector>

bool isSame(vector<int> a, vector<int> b) {
    vector<pair<int, int>> pairs;
    for (int i = 0; i < a.size(); ++i) {
        int num = a[i];
        int sumOfDigits = 0;
        while (num) {
            sumOfDigits += num % 10;
            num /= 10;
        }
        pairs.push_back({sumOfDigits, i});
    }
    for (int i = 0; i < b.size(); ++i) {
        int num = b[i];
        int sumOfDigits = 0;
        while (num) {
            sumOfDigits += num % 10;
            num /= 10;
        }
        pairs.push_back({sumOfDigits, i});
    }
    sort(pairs.begin(), pairs.end());
    for (const auto& pair : pairs) {
        if (a[pair.second] != b[pair.second]) {
            return false;
        }
    }
    return true;
}