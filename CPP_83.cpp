#include <iostream>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (long long i = 1; i <= (long long)pow(10, n-1); i++) {
        string s = to_string(i);
        if ((s[0] == '1' || s.back() == '1') && s.size() == n) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "Number of n-digit numbers that start or end with 1 is: " << starts_one_ends(n) << endl;
    return 0;
}