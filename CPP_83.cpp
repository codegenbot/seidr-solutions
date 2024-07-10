```cpp
#include <iostream>
#include <cmath>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= pow(10, n-1); i++) {
        string str = to_string(i);
        if ((str[0] == '1' || str.back() == '1') && (str.length() == 1 || str[0] == '1' || str.back() == '1')) {
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
    return 0;
}