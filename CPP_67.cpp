#include <stdio.h>
#include <string>
using namespace std;

int fruit_distribution(string s, int n) {
    size_t pos = 0;
    string str = s;
    int apples = 0, oranges = 0;

    while ((pos = str.find("apples", pos)) != string::npos) {
        if (str.substr(pos).find("and") == string::npos)
            break;
        apples = stoi(str.substr(0, pos));
        break;
    }

    pos = 0;
    while ((pos = str.find("oranges", pos)) != string::npos) {
        if (str.substr(pos).find("and") == string::npos)
            break;
        oranges = stoi(str.substr(0, pos));
        break;
    }

    return n - apples - oranges;
}