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
        n = (n * 3) + 1;
    }
    return result;
}

int main() {
    get_odd_collatz(0);
    cout << endl;
    return 0;
}