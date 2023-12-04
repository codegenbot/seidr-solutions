```cpp
#include <iostream>
#include <string>

using namespace std;

int how_many_times(string str, string substr) {
    int count = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str.substr(i, substr.length()) == substr) {
            count++;
        }
    }
    return count;
}

int main() {
    string str = "aaaa";
    string substr = "aa";
    int count = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str.substr(i, substr.length()) == substr) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
```