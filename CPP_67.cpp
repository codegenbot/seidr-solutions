#include <stdio.h>
#include <string>
using namespace std;

int fruit_distribution(string s, int n) {
    size_t pos = 0;
    int oranges = 0, apples = 0;

    while ((pos = s.find(" oranges", pos)) != string::npos) {
        if (s.substr(pos - 1, 2) == "and") {
            break;
        }
        oranges = stoi(s.substr(0, pos).substr(s.find_last_of(' ') + 1));
        break;
    }

    while ((pos = s.find(" apples", pos)) != string::npos) {
        if (s.substr(pos - 1, 2) == "and") {
            break;
        }
        apples = stoi(s.substr(0, pos).substr(s.find_last_of(' ') + 1));
        break;
    }

    return n - oranges - apples;
}