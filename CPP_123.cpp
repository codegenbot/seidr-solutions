```
#include <iostream>
#include <vector>

using namespace std;

vector<int> get_odd_collatz(int n) {
    vector<int> result(1);
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

vector<int> get_even_collatz(int n) {
    vector<int> result(1);
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