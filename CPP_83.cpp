#include <iostream>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if (i == 1 || to_string(i).substr(0, 1) == "1") {
            count++;
        }
    }

    for (int i = 10; i < pow(10, n); i++) {
        string str = to_string(i);
        if (str.substr(0, 1) == "1" || str.substr(str.length() - 1, 1) == "1") {
            count++;
        }
    }

    return count;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "The number of n-digit positive integers that start or end with 1 is: " << starts_one_ends(n) << endl;
    return 0;
}