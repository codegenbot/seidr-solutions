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
    sort(collatz.begin(), collatz.end());
    vector<int> odd_collatz;
    for (int num : collatz) {
        if (num % 2 != 0) {
            odd_collatz.push_back(num);
        }
    }
    return odd_collatz;
}

int main() {
    int n = 5;
    vector<int> result = get_odd_collatz(n);
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}