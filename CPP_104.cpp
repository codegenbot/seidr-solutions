#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

bool unique_digits(int x) {
    while (x > 0) {
        int digit = x % 10;
        if (digit % 2 == 0) {
            return false;
        }
        x /= 10;
    }
    return true;
}

int main() {
    vector<int> result;
    for (int num : x) {
        if (unique_digits(num)) {
            result.push_back(num);
        }
    }
    sort(result.begin(), result.end());
    return result;
}