```cpp
#include <iostream>
#include <string>

int how_many_times(string str, string substring) {
    int count = 0;
    size_t pos = 0;
    while ((pos = str.find(substring)) != string::npos) {
        ++count;
        str.erase(pos, substring.length());
    }
    return count;
}

int main() {
    // Call the function and test
    assert(how_many_times("john doe", "john") == 1);
    return 0;
}