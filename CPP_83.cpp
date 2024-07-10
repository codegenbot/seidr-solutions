#include <iostream>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (long long i = 1; i <= n; i++) {
        string str = to_string(i);
        if ((str.size() == n && str[0] == '1') || (str.size() == n && str[str.size()-1] == '1')) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Number of n-digit positive integers that start or end with 1 is: " << starts_one_ends(n) << endl;
    return 0;
}