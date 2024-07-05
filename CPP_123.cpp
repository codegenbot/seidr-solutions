#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> get_odd_collatz(int n) {
    vector<int> result;
    while (n != 1) {
        if (n % 2 != 0) {
            result.push_back(n);
        }
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
    }
    result.push_back(1);
    sort(result.begin(), result.end());
    result.erase(unique(result.begin(), result.end()), result.end()); // Remove duplicates
    return result;
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