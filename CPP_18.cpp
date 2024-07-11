#include <string>

int how_many_times(string str, string substring) {
    int count = 0;
    size_t pos = 0;
    while ((pos = str.find(substring)) != string::npos) {
        ++count;
        if (pos == 0) {
            str = str.substr(substring.length());
        } else {
            str = str.substr(0, pos) + str.substr(pos + substring.length());
        }
    }
    return count;
}