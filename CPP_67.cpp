#include<stdio.h>
#include<string>
using namespace std;

int fruit_distribution(string s, int n) {
    size_t pos = 0;
    int apples = 0, oranges = 0;

    while ((pos = s.find(" apples", pos)) != string::npos) {
        apples = stoi(s.substr(0, pos).substr(s.find(" ") + 1));
        break;
    }

    if (s.find(" oranges") != string::npos) {
        pos = s.find(" oranges");
        size_t end = s.find(" ", pos);
        if (end == string::npos)
            end = s.length();
        oranges = stoi(s.substr(pos, end - pos));
    }

    return n - apples - oranges;
}