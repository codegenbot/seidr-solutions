#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (long long i = 1; i <= pow(10, n-1); i++) {
        string str = to_string(i);
        bool start_with_one = false, end_with_one = false;
        if (str[0] == '1') start_with_one = true;
        if (str.back() == '1') end_with_one = true;
        if ((start_with_one || i == 1) && (end_with_one || i == pow(10, n-1))) {
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