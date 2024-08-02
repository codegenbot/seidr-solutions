#include <string>
#include <cassert>

bool cycpattern_check(string a, string b) {
    string temp = a + a;
    return temp.find(b) != string::npos;
}

int main() {
    assert(cycpattern_check("winemtt", "tinem") == true);
}