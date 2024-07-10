#include <stdio.h>
#include <string>
using namespace std;

int fruit_distribution(string s, int n) {
    size_t pos = 0;
    string word;
    int apples = 0, oranges = 0;

    while ((pos = s.find("and", pos)) != string::npos) {
        if (s.substr(0, pos).find("apples") != string::npos)
            apples = stoi(s.substr(0, pos).substr(s.find(" ") + 1));
        else if (s.substr(0, pos).find("oranges") != string::npos)
            oranges = stoi(s.substr(0, pos).substr(s.find(" ") + 1));
        s.erase(0, pos + 4);
    }

    if (s.find("apples") != string::npos)
        apples = stoi(s.substr(0, s.find(" ")).substr(s.find(" ") + 1));
    else if (s.find("oranges") != string::npos)
        oranges = stoi(s.substr(0, s.find(" ")).substr(s.find(" ") + 1));

    return n - apples - oranges;
}