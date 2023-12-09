```
#include <iostream>
#include <vector>
#include <string>
#include <list>
using namespace std;

vector<int> filter_integers(std::list<boost::any> values) {
    vector<int> result;
    for (auto& value : values) {
        if (value.type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}
```