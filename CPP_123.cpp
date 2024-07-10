```
#include <iostream>
#include <vector>

using namespace std;

vector<int> get_odd_collatz(int n) {
    vector<int> result;
    while (n != 1) {
        if (n % 2 == 0) {
            int temp = n / 2; 
            n = temp;
        } else {
            n = 3 * n + 1;
        }
        if (n % 2 != 0) { 
            result.push_back(n);
        }
    }
    return result;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    vector<int> res = get_odd_collatz(n);
    cout << "The Collatz sequence of odd numbers is: ";
    for (int i : res) {
        cout << i << " ";
    }
    cout << endl;
    return 0;