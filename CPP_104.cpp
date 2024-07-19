#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b){
    if (a.size() != b.size()) {
        return false;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

vector<int> unique_digits(vector<int> x) {
    vector<int> result;
    for (int num : x) {
        int temp = num;
        bool hasEvenDigit = false;
        while (temp > 0) {
            if (temp % 2 == 0) {
                hasEvenDigit = true;
                break;
            }
            temp /= 10;
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
    return 0;
}