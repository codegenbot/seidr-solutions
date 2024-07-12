```
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> get_odd_collatz(int n) {
    vector<int> result;
    bool has_odd_collatz = false;
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            result.push_back(n);
            has_odd_collatz = true;
            break; // no need to check i anymore
        }
    }
    if (!has_odd_collatz) return vector<int>(); // return empty vector if no odd Collatz found
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