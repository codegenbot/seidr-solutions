#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> get_odd_collatz(int n) {
    vector<int> res;
    while (n != 1) {
        if (n % 2 == 0)
            n /= 2;
        else
            n = 3 * n + 1;
        if (n % 2 != 0)
            res.push_back(n);
    }
    return res;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    vector<int> result = get_odd_collatz(n);
    sort(result.begin(), result.end());
    cout << "The sorted odd numbers in Collatz sequence are: ";
    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}