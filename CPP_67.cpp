#include <stdio.h>
#include <string>
using namespace std;

int fruit_distribution(string s, int n) {
    size_t pos = 0;
    int apples = 0, oranges = 0;

    while ((pos = s.find("apples", pos)) != string::npos) {
        if (s.find("and", pos) == string::npos || s.find("and", pos + 8) == string::npos)
            break;
        size_t end = s.find(" and ", pos);
        apples = stoi(s.substr(pos, end - pos));
        pos = end + 5;
    }

    while ((pos = s.find("oranges", pos)) != string::npos) {
        if (s.find("and", pos) == string::npos || s.find("and", pos + 7) == string::npos)
            break;
        size_t end = s.find(" and ", pos);
        oranges = stoi(s.substr(pos, end - pos));
        pos = end + 5;
    }

    return n - apples - oranges;
}