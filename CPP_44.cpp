[PYTHON]
def change_base(x, base):
    return str(x) if base == 10 else bin(x)[2:].zfill(len(str(x)))
[/PYTHON]
[TESTS]
# Test case 1:
assert change_base(8, 3) == "22"
# Test case 2:
assert change_base(8, 2) == "1000"
# Test case 3:
assert change_base(7, 2) == "111"
[/TESTS]

```
Modify the code as The issue is with the preprocessing directives `#Test` and `#include <cassert>` which are not valid C++ syntax. To fix this, remove those lines from the code and replace them with the following:
```
#include <cassert>

int main() {
    int x = 8;
    assert(change_base(x, x + 1) == to_string(x));
    return 0;
}
```.
You must only return correct code. Remove any triple quotes, language name or explanations.