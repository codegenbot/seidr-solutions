#include <stdio.h>
#include <string>
using namespace std;

int fruit_distribution(string s, int n) {
    size_t pos = 0;
    int apples = 0, oranges = 0;

    while ((pos = s.find("apples", pos)) != string::npos) {
        if (s.substr(pos, "apples".length()).find("and") == string::npos) {
            apples = stoi(s.substr(0, s.find("and")).c_str());
            break;
        }
        pos += "apples and ".length();
    }

    while ((pos = s.find("oranges", pos)) != string::npos) {
        if (s.substr(pos, "oranges".length()).find("and") == string::npos) {
            oranges = stoi(s.substr(0, s.find("and")).c_str());
            break;
        }
        pos += "oranges and ".length();
    }

    return n - apples - oranges;
}