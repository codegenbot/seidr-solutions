```cpp
#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> filter_by_prefix(vector<string> strings, string prefix) {
    vector<string> filtered_strings;
    for (string s : strings) {
        if (s.substr(0, prefix.length()) == prefix) {
            filtered_strings.push_back(s);
        }
    }
    return filtered_strings;
}

int main() {
    vector<string> strings = {"apple", "banana", "cherry", "date"};
    string prefix = "ba";
    vector<string> filtered_strings = filter_by_prefix(strings, prefix);
    for (string s : filtered_strings) {
        cout << s << endl;
    }
    return 0;
}
```