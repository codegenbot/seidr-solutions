```cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    
    vector<int> result = count_up_to(n);
    
    if (result.empty()) {
        cout << "No prime numbers up to " << n << endl;
    } else {
        cout << "Prime numbers up to " << n << ":";
        for (int num : result) {
            cout << ' ' << num;
        }
        cout << endl;
    }
    
    return 0;
}

vector<int> count_up_to(int n) {
    vector<int> result;
    for (int i = 1; i <= n; ++i) {
        bool isPrime = true;
        for (int j = 2; j * j <= i; ++j) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
            result.push_back(i);
    }
    return result;
}