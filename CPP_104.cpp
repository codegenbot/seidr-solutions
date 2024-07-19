#include <vector>
#include <algorithm>
#include <cassert>

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

bool issame(vector<int> a, vector<int> b);

vector<int> unique_digits(vector<int> x){
    vector<int> result;
    for (int num : x) {
        bool hasEvenDigit = false;
        int n = num;
        while (n > 0) {
            if ((n % 10) % 2 == 0) {
                hasEvenDigit = true;
                break;
            }
            n /= 10;
        }
        if (!hasEvenDigit) {
            result.push_back(num);
        }
    }
    sort(result.begin(), result.end());
    return result;
}

int main() {
    assert(issame(unique_digits({135, 103, 31}), {31, 135}));
}