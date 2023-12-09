```
#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <variant>

using namespace std;

vector<int> filter_integers(std::list<variant<int, string>> values) {
    vector<int> result;
    for (auto& value : values) {
        if (value.index() == 0) {
            result.push_back(get<0>(value));
        }
    }
    return result;
}
```