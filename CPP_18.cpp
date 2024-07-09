```cpp
#include <string>

int main() {
    string str = "john doe";
    string substring = "john";
    int result = how_many_times(str, substring);
    assert(result == 1);
}

int how_many_times(string str, string substring) {
    int count = 0;
    size_t pos = 0;
    while ((pos = str.find(substring)) != string::npos) {
        count++;
        str.erase(pos, substring.length());
    }
    return count;
}