#include <stdio.h>
#include <string>
using namespace std;

int fruit_distribution(string s, int n) {
    size_t pos = 0;
    string temp = "";
    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            pos = i;
            break;
        }
        temp += s[i];
    }
    int apples = stoi(temp.substr(0, temp.find(' ')));
    int oranges = stoi(s.substr(pos + 1).substr(0, s.substr(pos + 1).find(' ')));
    return n - apples - oranges;
}