
Here's the modified code:
```
#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<list_any> values = {{3, 'c', 3, 3, 'a', 'b'}};
    assert(is_same(filter_integers(values), {3, 3, 3}));
    return 0;
}
```