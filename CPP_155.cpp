#include <vector>
#include <cassert>

bool issame(const vector<int>& a, const vector<int>& b) {
    return (a[0] == b[0] && a[1] == b[1]);
}

vector<int> countEvenOddDigits(int num) {
    vector<int> result(2, 0);
    string numStr = to_string(abs(num));
    for (char c : numStr) {
        if ((c - '0') % 2 == 0) {
            result[0]++;
        } else {
            result[1]++;
        }
    }
    return result;
}