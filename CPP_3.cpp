```
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
The issue is caused by the fact that you have included backticks (```) in your code, which are not valid characters in C++. To fix this, simply remove the backticks from your code and it should compile correctly.