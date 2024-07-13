#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> unique_digits(vector<int> x) {
    vector<int> result;
    for (int num : x) {
        int temp = 0;
        bool hasEvenDigit = false;
        while (num > 0) {
            int digit = num % 10;
            if (digit % 2 == 0) {
                hasEvenDigit = true;
                break;
            }
            temp = temp * 10 + digit;
            num /= 10;
        }
        if (!hasEvenDigit) {
            result.push_back(temp);
        }
    }
    sort(result.begin(), result.end());
    return result;
}

int main() {
    vector<int> x = {15, 33, 1422, 1};
    vector<int> res = unique_digits(x);
    for (int i : res) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}