```
#include <iostream>
#include <algorithm>
using namespace std;

// Declare issame function
bool issame(int* a, int* b) {
    return *a == *b;
}

int main() {
    // Use issame function
    assert (issame({21, 14, 23, 11}) , {23, 21, 14, 11});
    return 0;
}
```