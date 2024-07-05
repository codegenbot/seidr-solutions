#include <sstream>
#include <string>

string string_sequence(int n) {
    stringstream ss;
    for (int i = 0; i <= n; ++i) {
        ss << i << " ";
    }
    return ss.str();
}

int main() {
    assert(string_sequence(10) == "0 1 2 3 4 5 6 7 8 9 10");
    return 0;
}