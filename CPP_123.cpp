#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> get_odd_collatz(int n) {
    vector<int> result;  
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;  
        } else {
            if (n > 0) {
                result.push_back(n);
            }
        }
        if (n % 2 != 0) { 
            n = (n * 3) + 1;
        } else {
            if (n > 0) {
                result.push_back(n);
            }
        }
    }
    return result;
}

int main() {
    int input;
    cout << "Enter a positive integer: ";
    cin >> input; 
    vector<int> odd_collatz = get_odd_collatz(input);
    cout << "The sequence of Collatz Conjecture for the given number is: ";
    for (int num : odd_collatz) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}