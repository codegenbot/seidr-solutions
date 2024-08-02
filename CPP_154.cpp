#include <string>
bool cycpattern_check(string a, string b) {
    string temp = a + a;
    return temp.find(b) != string::npos;
}