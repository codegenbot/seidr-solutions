```cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> get_odd_collatz(int n) {
    vector<int> collatz;
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        collatz.push_back(n);
    }
    collatz.push_back(1);

    vector<int> odd_collatz;
    for (int i = 0; i < collatz.size(); i++) {
        if (collatz[i] % 2 != 0) {
            odd_collatz.push_back(collatz[i]);
        }
    }

    sort(odd_collatz.begin(), odd_collatz.end());
    return odd_collatz;
}

int main() {
    int n;
    cin >> n;
    vector<int> result = get_odd_collatz(n);
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}