#include <iostream>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (long long i = 1; i <= 9; i++) {
        if ((i == 1 || to_string(i).substr(0, 1) == "1") && (to_string(i).length() == n)) {
            count++;
        }
        for (long long j = 10; j < pow(10, n); j++) {
            if ((j / pow(10, (n - 1)) == 1 || to_string(j).substr(to_string(j).length() - 1, 1) == "1") && (to_string(j).length() == n)) {
                count++;
            }
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