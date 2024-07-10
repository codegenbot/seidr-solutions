```
#include <iostream>
#include <cmath>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= pow(10, n-1); i++) {
        if (i == 1 || i % 10 == 1) {
            count++;
        }
        string str;
        str += '1';  
        for (int j = 0; j < n - 1; j++) {
            str += '0';
        }
        if (str != to_string(i)) {
            continue;
        }
        count++;
    }
    return count;

}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "The count of the numbers of " << n << "-digit positive integers that start or end with 1 is: " << starts_one_ends(n) << endl;
}