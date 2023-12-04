```
#include <iostream>
#include <vector>
#include <string>
#include <initializer_list>
using namespace std;

vector<int> filter_integers(std::initializer_list<int> values) {
    vector<int> result;
    for (auto value : values) {
        if (!result.contains(value)) {
            result.push_back(value);
        }
    }
    return result;
}

int main() {
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    return 0;
}
```