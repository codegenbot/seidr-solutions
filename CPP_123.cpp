#include <iostream>
#include <deque>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> get_odd_collatz(int n) {
    vector<int> result;
    while (n != 1) {
        if (n % 2 == 0) {
            result.push_back(n);
            n /= 2;
        } else {
            result.push_back(n);
            n = 3 * n + 1;
        }
    }
    return result;

}

vector<int> main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    vector<int> res = get_odd_collatz(n); 
    for (auto i : res) {
        cout << i << " ";
    }
    cout << endl;
    return res;
}