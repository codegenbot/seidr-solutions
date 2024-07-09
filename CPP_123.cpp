#include <iostream>
#include <vector>
using namespace std;

vector<int> get_odd_collatz(int n) {
    vector<int> result;
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
        if (n % 2 != 0)
            result.push_back(n);
    }
    return result;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    vector<int> result = get_odd_collatz(n);
    sort(result.begin(), result.end());
    cout << "The odd numbers in the Collatz sequence are: ";
    for (auto it : result) {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}