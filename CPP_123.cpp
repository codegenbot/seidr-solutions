#include <iostream>
#include <vector>

using namespace std;

vector<int> get_odd_collatz(int) {
    vector<int> result;
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
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
    vector<int> res = get_odd_collatz(0);
    cout << "The Collatz sequence of odd numbers is: ";
    for (int i : res) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}