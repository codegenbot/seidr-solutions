```
#include <iostream>
#include <vector>
#include <string>
#include <variant>
using namespace std;

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (auto& value : values) {
        if (value.type() == typeid(int)) {
            result.push_back(std::get<int>(value));
        }
    }
    return result;
}
```