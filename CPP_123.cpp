```cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> get_odd_collatz(int) {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n; 

    if (n <= 0) { 
        return vector<int>(); 
    }

    vector<int> result;  
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;  
        } else {
            if (n > 0) {
                result.push_back(n);
            } else {
                // Handle invalid input: n should be a positive integer
            }
        }
        if (n % 2 != 0) { 
            n = (n * 3) + 1;
        }
    }
    return result;
}

int main() {
    vector<int> odd_collatz = get_odd_collatz(0);
    cout << "The sequence of Collatz Conjecture for the given number is: ";
    for (int num : odd_collatz) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}