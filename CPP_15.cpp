#include <iostream>
#include <sstream>
using namespace std;

string string_sequence(int n) {
    string result = "0";
    for (int i = 1; i <= n; ++i) {
        result += " " + to_string(i);
    }
    return result;
}

int main() {
    assert(string_sequence(10) == "0 1 2 3 4 5 6 7 8 9 10");
    return 0;
}