#include <iostream>
#include <deque>
#include <algorithm>

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
    deque<int> res = get_odd_collatz(n);
    for (auto i : res) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}