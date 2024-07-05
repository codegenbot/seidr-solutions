#include <string>
#include <sstream>

string string_sequence(int n) {
    stringstream ss;
    for (int i = 0; i <= n; ++i) {
        ss << i << " ";
    }
    return ss.str();
}