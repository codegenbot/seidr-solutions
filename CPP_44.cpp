#include <string> // Include string header
#include <cassert> // Include assert header

using namespace std; // Use std namespace

// Function signature
string change_base(int x, int base) {
    string result = "";
    while (x > 0) {
        result = to_string(x % base) + result;
        x /= base;
    }
    return result == "" ? "0" : result;
}

int main() {
    // Sample test case
    int x = 10;
    assert(change_base(x, x + 1) == to_string(x)); // Compare result
    return 0;
}