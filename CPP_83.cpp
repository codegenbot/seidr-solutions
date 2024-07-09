#include <iostream>
using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= n; ++i) {
        string str = (i == 1 ? "1" : to_string(i));
        if (str.find("1") != string::npos || str.back() == '1')
            ++count;
    }
    return count;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Number of integers that start or end with 1: " << starts_one_ends(n) << endl;
    return 0;
}