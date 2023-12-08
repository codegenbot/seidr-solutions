```
#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <any>
using namespace std;

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (auto& value : values) {
        if (value.type() == typeid(int)) {
            result.push_back(any_cast<int>(value));
        }
    }
    return result;
}
```