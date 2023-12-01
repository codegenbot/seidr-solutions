#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool hasEvenDigit(int num) {
    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 == 0) {
            return true;
        }
        num = num / 10;
    }
    return false;
}

vector<int> unique_digits(vector<int> x) {
    vector<int> result;
    for (int i = 0; i < x.size(); i++) {
        int num = x[i];
        if (!hasEvenDigit(num)) {
            result.push_back(x[i]);
        }
    }
    sort(result.begin(), result.end());
    return result;
}

int main() {
    assert(issame(unique_digits({135, 103, 31}), {31, 135}));
    return 0;
}