#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<long long> get_odd_collatz(int n) {
    vector<long long> result;
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            result.push_back(n);
        }
    }
    return result;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    vector<long long> res = get_odd_collatz(n);
    for (long long i : res) {
        cout << i << " ";
    }
    cout << endl;
    return 0;