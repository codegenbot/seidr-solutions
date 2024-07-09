```cpp
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int starts_one_ends(int n);

int main() {
    int n = 0; 
    cout << "Enter a positive integer: ";
    cin >> n;
    int result = starts_one_ends(n);
    ostringstream oss;
    oss << "Numbers of " << n << "-digit positive integers that start or end with 1: " << result;
    string output = oss.str();
    cout << output << endl;
    return 0;
}

int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= pow(10, n-1); i++) {
        if ((i / pow(10, n-1)) % 10 == 1 || i % 10 == 1) {
            count++;
        }
    }
    return count;
}