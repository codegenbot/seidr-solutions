#include <stdio.h>
#include <string>
using namespace std;

int fruit_distribution(string s, int n) {
    size_t pos = 0;
    string str = s + " ";
    int apples = 0, oranges = 0;

    while ((pos = str.find("apples", pos)) != string::npos) {
        if (str.find("and", pos) == string::npos || str.find("and", pos) > str.find("apples", pos)) {
            size_t end = str.find(" ", pos);
            apples = stoi(str.substr(pos + 7, end - pos - 7));
            break;
        }
        pos = str.find("apples", pos + 1);
    }

    while ((pos = str.find("oranges", pos)) != string::npos) {
        if (str.find("and", pos) == string::npos || str.find("and", pos) > str.find("oranges", pos)) {
            size_t end = str.find(" ", pos);
            oranges = stoi(str.substr(pos + 7, end - pos - 7));
            break;
        }
        pos = str.find("oranges", pos + 1);
    }

    return n - apples - oranges;
}