#include <iostream>
#include <vector>
using namespace std;

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

vector<int> unique_digits(vector<int> x) {
    vector<int> result;
    for (int num : x) {
        int digit = 0;
        bool hasEvenDigit = false;
        while (num > 0) {
            int temp = num % 10;
            if (temp % 2 == 0) {
                hasEvenDigit = true;
                break;
            }
            num /= 10;
        }
        if (!hasEvenDigit)
            result.push_back(num);
    }
    sort(result.begin(), result.end());
    return result;
}

int main() {
    assert(issame(unique_digits({135, 103, 31}) , {31, 135}));
    return 0;
}