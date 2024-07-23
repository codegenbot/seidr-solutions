#include<stdio.h>
#include<string>
using namespace std;

int fruit_distribution(string s, int n) {
    size_t pos = 0;
    int apples = 0, oranges = 0;

    while ((pos = s.find(" apples", pos)) != string::npos) {
        apples = stoi(s.substr(0, pos).erase().substr(0, s.find(" ")).erase());
        break;
    }

    while ((pos = s.find(" oranges", pos)) != string::npos) {
        oranges = stoi(s.substr(pos + 8).erase().substr(0, s.find(" ") - 1));
    }

    return n - apples - oranges;
}