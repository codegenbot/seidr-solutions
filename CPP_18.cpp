```cpp
#include <string>

int how_many_times(string str, string substring) {
    int count = 0;
    size_t pos = 0;
    while ((pos = str.find(substring)) != string::npos) {
        if (pos == 0) {
            ++count;
            str.erase(0, substring.length());
        } else {
            ++count;
            str.erase(pos - substring.length(), substring.length());
        }
    }
    return count;
}