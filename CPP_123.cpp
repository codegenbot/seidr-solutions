#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> get_odd_collatz(int n) {
    vector<int> collatz;
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
        collatz.push_back(n);
    }
    collatz.push_back(1);
    vector<int> result;
    for (int num : collatz) {
        if (num % 2 != 0) {
            result.push_back(num);
        }
    }
    sort(result.begin(), result.end());
    return result;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    vector<int> result = get_odd_collatz(n);
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}