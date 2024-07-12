```cpp
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
        } 
        else {
            // Do nothing
        }
        n = (n * 3) + 1;
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