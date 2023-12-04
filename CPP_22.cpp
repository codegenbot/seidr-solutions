```
#include <iostream>
#include <vector>
#include <initializer_list>
using namespace std;

vector<int> filter_integers(initializer_list<int> values) {
    vector<int> result;
    for (auto value : values) {
        if (value.type() == typeid(int)) {
            result.push_back(std::get<int>(value));
        }
    }
    return result;
}

int main() {
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    return 0;
}
```
Note: The `issame` function is not defined in the code snippet provided. You should define it or use a different assertion method that is available in C++.