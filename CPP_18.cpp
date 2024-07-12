```cpp
#include <string>

int how_many_times(const string& str, const string& substring) {
    int count = 0;
    size_t pos = 0;
    string temp = str; 
    while ((pos = temp.find(substring)) != string::npos) {
        count++;
        temp.erase(0, pos + substring.size());
    }
    return count;
}