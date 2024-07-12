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
    int input = 0;
    vector<int> collatz = get_odd_collatz(input);
    cout << "Collatz sequence: ";
    for (int num : collatz) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}