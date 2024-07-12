#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> get_odd_collatz(int) {
    vector<int> result;
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
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
    int res = get_odd_collatz(0);
    for (int i : res) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}