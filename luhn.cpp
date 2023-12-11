#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <stdio.h>
#include <math.h>
#include <map>
#include <set>
#include <stack>
#include <climits>
using namespace std;

int luhn(vector<int>& digits) {
    int sum = 0;
    for (int i = digits.size() - 2; i >= 0; i -= 2) {
        int digit = digits[i];
        if (digit < 5) {
            sum += digit * 2;
        } else {
            sum += (digit * 2) - 9;
        }
    }
    return sum % 10 == 0;
}

int main() {
    vector<int> digits = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 8, 7, 6, 5, 4, 3};
    cout << "luhn: " << luhn(digits) << endl;
    return 0;
}