```cpp
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (long long i = 1; i <= pow(10, n-1); i++) {
        string str;
        str.reserve(n);
        for (char c : to_string(i)) {
            char digit = (c - '0') == 1 ? '1' : '0';
            str.push_back(digit);
        }
        if ((i == 1 || str[0] == '1' || str.back() == '1') && (str[0] == '1' || str[str.size()-1] == '1')) {
            count++;
        }
    }
    return count;

}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "The count of the numbers of " << n << "-digit positive integers that start or end with 1 is: " << starts_one_ends(n) << endl;
}