#include <iostream>
#include <string>
#include <cassert>
using namespace std;

string string_sequence(int n) {
    string result = "";
    for (int i = 0; i <= n; ++i) {
        if (i > 0) result += " ";
        result += to_string(i);
    }
    return result;
}

int main() {
    assert (string_sequence(10) == "0 1 2 3 4 5 6 7 8 9 10");
    cout << "Test passed" << endl;
    return 0;
}