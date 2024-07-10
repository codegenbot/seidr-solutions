Here is the completed code:

#include <stdio.h>
#include <string>
using namespace std;

int fruit_distribution(string s, int n) {
    size_t pos = 0;
    int apples = 0, oranges = 0;

    while ((pos = s.find(" apples", pos)) != string::npos) {
        apples = stoi(s.substr(0, pos).erase(0, s.find(" ") + 1));
        break;
    }

    while ((pos = s.find(" oranges", pos)) != string::npos) {
        oranges = stoi(s.substr(pos, s.find(" and") - pos).erase(0, s.find(" ") + 1));
        break;
    }

    return n - apples - oranges;
}