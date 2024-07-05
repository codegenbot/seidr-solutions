#include <string>

string string_sequence(int n) {
    ostringstream ss;
    for (int i = 1; i <= n; ++i) {
        ss << i << " ";
    }
    return ss.str();
}