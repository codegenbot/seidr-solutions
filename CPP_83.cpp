```cpp
#include <iostream>
using namespace std;

int starts_one_ends(int n);

int main() {
    int n = 0; 
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "The count of the numbers of " << n << "-digit positive integers that start or end with 1 is: " << starts_one_ends(n) << endl;
    return 0;
}

int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if (i == 1 || i % 10 == 1) {
            string num = to_string(i);
            if (num.length() == n) {
                count++;
            }
        }
        for (int j = 1; j < i; j++) {
            string str = to_string(j);
            while (str.length() < n && !str.back().ends_with('1')) {
                break;
            }
            if (!str.back().ends_with('1') && str.length() == n) {
                count++;
            }
        }
    }
    return count;