```cpp
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

int main() {
    vector<int> x = {1, 2, 3, 4, 5};
    vector<int> y = unique_digits(x);
    for (int num : y) {
        cout << num << " ";
    }
    cout << endl;
    return 0;