#include <iostream>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if (i == 1 || i == to_string(10).size() * 9 + 1) {
            count += 1;
        }
    }

    for (int i = 10; i <= n; i++) {
        string str = to_string(i);
        if ((str[0] == '1' || str[str.size() - 1] == '1') && str.size() == n) {
            count += 1;
        }
    }

    return count;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "Count of the numbers of " << n << "-digit positive integers that start or end with 1 is: " << starts_one_ends(n) << endl;

    return 0;
}