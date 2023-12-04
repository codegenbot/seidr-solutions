```
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool issame(const string& s1, const string& s2) {
    return s1 == s2;
}

int main() {
    vector<string> v = {"(())", "(()())", "(())()"};
    for (auto it = v.begin(); it != v.end(); ++it) {
        cout << *it << endl;
    }
    return 0;
}
```