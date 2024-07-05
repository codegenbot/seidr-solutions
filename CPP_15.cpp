```
#include <string>

string string_sequence(int n) {
    stringstream ss;
    for (int i = 1; i <= n; ++i) {
        ss << i << " ";
    }
    return ss.str();
}