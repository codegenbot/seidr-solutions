```
#include <iostream>
#include <string>
using namespace std;

string change_base(int x, int base) {
    if (base == 10) {
        return to_string(x);
    } else {
        string bin = bitset<32>(x).to_string();
        return bin.substr(32 - len(bin));
    }
}
```