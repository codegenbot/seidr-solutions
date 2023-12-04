```
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<string> strings = {"apple", "banana", "orange"};
    string prefix = "ba";
    vector<string> result = filter_by_prefix(strings, prefix);
    for (auto &s : result) {
        cout << s << endl;
    }
    return 0;
}
```