```cpp
#include <iostream>
#include <vector>

using namespace std;

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for (int i = 0; i < strings.size(); i++) {
        if (strings[i].find(prefix) == 0) {
            result.push_back(strings[i]);
        }
    }
    return result;
}

int main() {
    assert(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx") == vector<string>{"xxx", "xxxAAA", "xxx"});

    return 0;
}
```