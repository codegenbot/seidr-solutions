#include <iostream>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (long long i = 1; i <= n; i++) {
        string str = to_string(i);
        if ((str[0] == '1' || str[str.length() - 1] == '1') && str.length() == n)
            count++;
    }
    return count;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "Count of numbers that start or end with 1: " << starts_one_ends(n) << endl;
    return 0;
}