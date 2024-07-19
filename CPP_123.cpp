#include <iostream>
#include <deque>
#include <algorithm>
#include <vector>

using namespace std;

deque<int> get_odd_collatz(int n) {
    deque<int> result;
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
    vector<int> res(vector<int>(get_odd_collatz(n).begin(), get_odd_collatz(n).end()));
    for (auto i : res) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}