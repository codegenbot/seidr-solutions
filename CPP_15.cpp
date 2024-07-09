#include <iostream>
#include <sstream>

using namespace std;

string string_sequence(int n) {
    std::ostringstream oss;
    for (int i = 0; i <= n; i++) {
        oss << i << " ";
    }
    return oss.str();
}