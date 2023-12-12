```
#include <iostream>
#include <string>

using namespace std;

bool is_nested(string str) {
    int count = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '[' || str[i] == ']') {
            count++;
        }
    }
    return count % 2 == 1;
}

int main() {
    string str = "[[]]]]]]][[[[[]";
    cout << is_nested(str) << endl;
    return 0;
}
```