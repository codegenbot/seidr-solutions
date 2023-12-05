```
#include <cassert>

int main() {
    int x = 8;
    assert(change_base(x, x + 1) == to_string(x));
    return 0;
}

def change_base(x, base):
    return str(x) if base == 10 else bin(x)[2:].zfill(len(str(x)))
```