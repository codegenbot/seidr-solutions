#include <stdio.h>
#include <string>
using namespace std;

int fruit_distribution(string s, int n) {
    size_t pos = 0;
    string str = s;
    int apples = 0, oranges = 0;

    while ((pos = str.find("apples")) != string::npos) {
        if (str.substr(pos, "apples".length()).find("and") == string::npos) {
            apples = stoi(str.substr(0, pos).erase());
            break;
        }
        apples = stoi(str.substr(0, pos - 6).erase());
    }

    while ((pos = str.find("oranges")) != string::npos) {
        if (str.substr(pos, "oranges".length()).find("and") == string::npos) {
            oranges = stoi(str.substr(pos + 7).erase());
            break;
        }
        oranges = stoi(str.substr(pos - 6).erase());
    }

    return n - apples - oranges;
}