```
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> get_odd_collatz(int) {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    vector<int> result(1);  
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

vector<int> get_odd_collatz(int) {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    vector<int> result(1);  
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