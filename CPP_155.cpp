#include <vector>
#include <cassert>

bool issame(vector<int>& arr) {
    return arr[0] == arr[1];
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