#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> get_odd_collatz(int n) {
    vector<int> result;
    while (n != 1) {
        if (n % 2 == 0)
            n = n / 2;
        else
            n = 3 * n + 1;
        if (n % 2 != 0)
            result.push_back(n);
    }
    sort(result.begin(), result.end());
    return result;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    vector<int> res = get_odd_collatz(n);
    cout << "The odd numbers in the Collatz sequence are: ";
    for (auto i : res) {
        cout << i << " ";
    }
    return 0;
}