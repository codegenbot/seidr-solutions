#include <iostream>
#include <vector>

using namespace std;

bool below_zero(vector<int> operations) {
    int balance = 0;
    for (int i = 0; i < operations.size(); i++) {
        if (operations[i] > 0) {
            balance += operations[i];
        } else {
            balance -= operations[i];
            if (balance < 0) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    vector<int> operations = {1, 2, -4, 5};
    cout << below_zero(operations) << endl;
    return 0;
}
```
In this code, the function `below_zero` takes a vector of integers as input and returns true if the balance after performing all operations becomes negative. The function works by iterating over the elements in the vector and keeping track of the current balance. If the balance ever becomes negative, the function returns true. If the loop completes without returning true, the function returns false.
The main function simply calls the `below_zero` function with a sample input and prints the result to the console.