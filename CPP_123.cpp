#include <iostream>
#include <vector>
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
    vector<int> odd_collatz;
    for (int i = collatz.size() - 1; i >= 0; i--) {
        if (collatz[i] % 2 != 0) {
            odd_collatz.push_back(collatz[i]);
        }
    }
    return odd_collatz;
}

int main() {
    int n;
    cin >> n;
    vector<int> result = get_odd_collatz(n);
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}