#include <vector>
#include <cassert>

bool issame(vector<int>& v1, vector<int>& v2) {
    return v1[0] == v2[0] && v1[1] == v2[1];
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