```
#include <iostream>
using namespace std;

bool below_zero(int operations[]) {
    int balance = 0;
    for (int i = 0; i < sizeof(operations); i++) {
        balance += operations[i];
        if (balance < 0) {
            return true;
        }
    }
    return false;
}
```