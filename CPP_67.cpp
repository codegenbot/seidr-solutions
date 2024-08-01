#include <stdio.h>
#include <string>
using namespace std;

int fruit_distribution(string s, int n) {
    size_t pos = 0;
    int apples = 0, oranges = 0;

    while ((pos = s.find("apples", pos)) != string::npos) {
        if (s.substr(pos, "apples".length()).find("and") == string::npos) {
            apples = stoi(s.substr(0, pos).erase().substr(0, s.substr(0, pos).find(" ")).c_str());
        }
        else {
            apples = stoi(s.substr(0, pos).erase().substr(0, s.substr(0, pos).find("and")).c_str());
        }

        pos += (s.find("apples", pos) == string::npos ? s.length() : s.find("apples", pos));
    }

    while ((pos = s.find("oranges", 0)) != string::npos) {
        if (s.substr(pos, "oranges".length()).find("and") == string::npos) {
            oranges = stoi(s.substr(0, pos).erase().substr(0, s.substr(0, pos).find(" ")).c_str());
        }
        else {
            oranges = stoi(s.substr(0, pos).erase().substr(0, s.substr(0, pos).find("and")).c_str());
        }

        pos += (s.find("oranges", pos) == string::npos ? s.length() : s.find("oranges", pos));
    }

    return n - apples - oranges;
}