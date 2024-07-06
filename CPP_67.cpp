#include <stdio.h>
#include <string>
using namespace std;

int fruit_distribution(string s, int n) {
    int total = 0;
    string str;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            str = s.substr(0, i);
            break;
        }
    }

    size_t pos = str.find("apples");
    int apples = 0;
    if (pos != string::npos) {
        size_t start = str.find_first_of("0123456789") + 1;
        size_t end = str.find(" and", start);
        apples = stoi(str.substr(start, end - start));
    }

    pos = str.find("oranges");
    int oranges = 0;
    if (pos != string::npos) {
        size_t start = str.find_first_of("0123456789") + 1;
        size_t end = str.find(" and", start);
        oranges = stoi(str.substr(start, end - start));
    }

    total = n - apples - oranges;

    return total;
}