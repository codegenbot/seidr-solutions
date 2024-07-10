#include <string>

using namespace std;

bool cycpattern_check(const string &a, const string &b) {
    return (a + a).find(b) != string::npos;
}