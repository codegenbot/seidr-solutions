#include <iostream>
using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (long long i = 1; i <= n; i++) {
        if (i == 1 || to_string(i).back() == '1') {
            count++;
            for (long long j = 1; j < i; j++) {
                if (to_string(j).back() != '1' && stoi(to_string(j)) / 10 != 1) break;
            }
        }
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