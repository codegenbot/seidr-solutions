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
        if (digit > 4) {
            sum += digit - 9;
        } else {
            sum += digit;
        }
    }
    return sum;
}

int main() {
    vector<int> digits;
    for (int i = 0; i < 16; i++) {
        int num;
        cin >> num;
        digits.push_back(num);
    }
    cout << luhn(digits) << endl;
    return 0;
}