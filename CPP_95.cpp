```
#include <iostream>
#include <string>
#include <map>
using namespace std;
bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;
    bool isLower = true, isUpper = true;
    for (auto it : dict) {
        if (!islower(it.first)) isLower = false;
        if (!isupper(it.first)) isUpper = false;
    }
    return isLower || isUpper;
}
int main() {
    map<string, string> dict;
    dict["a"] = "apple";
    dict["b"] = "banana";
    cout << check_dict_case(dict) << endl;
    return 0;
}
```