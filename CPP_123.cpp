#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> get_odd_collatz(int n) {
    vector<int> result;
    while (n != 1) {
        if (n % 2 == 0) {
            result.push_back(n);
            n /= 2;
        } else {
            n = 3 * n + 1;
            result.push_back(n);
        }
    }
    return result;

}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    vector<int> res(1); // Initialize with capacity of 1
    auto it = res.begin();
    while (n != 1) {
        if (n % 2 == 0) {
            *it++ = n;
            n /= 2;
        } else {
            n = 3 * n + 1;
            *it++ = n;
        }
    }
    *it++ = 1; // Add the final 1
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    cout << endl;
    return 0;
}