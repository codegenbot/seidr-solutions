#include <iostream>
#include <sstream>
#include <string>

using namespace std;

std::string string_sequence(int n) {
    ostringstream oss;
    for (int i = 0; i <= n; ++i) {
        oss << i << " ";
    }
    return oss.str();
}

int main() {
    // Your existing code
}