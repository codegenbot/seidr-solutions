```
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> unique_digits(vector<int> x) {
    vector<int> result;
    for (int num : x) {
        bool has_even_digit = false;
        int temp = num;
        while (temp != 0) {
            int digit = temp % 10;
            if (digit % 2 == 0) {
                has_even_digit = true;
                break;
            }
            temp /= 10;
        }
        if (!has_even_digit) {
            result.push_back(num);
        }
    }
    sort(result.begin(), result.end());
    return result;
}

int main() {
    vector<int> x = {15, 33, 1422, 1};
    vector<int> result = unique_digits(x);
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}