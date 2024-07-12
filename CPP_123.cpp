```cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> get_odd_collatz(int n) {
    vector<int> result;
    int i = 0;
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
        if (n % 2 != 0 && i < 10) {
            result.push_back(n);
            i++;
        }
    }
    sort(result.begin(), result.end());
    return result;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    vector<int> res = get_odd_collatz(n);
    for (int i : res) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}