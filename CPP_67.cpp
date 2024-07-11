#include<stdio.h>
#include<string>
using namespace std;

int fruit_distribution(string s, int n) {
    size_t pos = 0;
    int apples = 0, oranges = 0;

    while ((pos = s.find("apples", pos)) != string::npos) {
        if (s.substr(pos, "apples".length()).find("and") == string::npos) {
            pos = s.find(" and ", pos);
            if (pos == string::npos) {
                pos = s.find(" apples", pos);
            } else {
                break;
            }
        }
        int start = pos + 6; // "apples" length is 6
        while (s[start] >= '0' && s[start] <= '9') {
            start++;
        }
        apples = stoi(s.substr(start - position, pos - start));
        break;
    }

    while ((pos = s.find("oranges", pos)) != string::npos) {
        if (s.substr(pos, "oranges".length()).find("and") == string::npos) {
            pos = s.find(" and ", pos);
            if (pos == string::npos) {
                pos = s.find(" oranges", pos);
            } else {
                break;
            }
        }
        int start = pos + 7; // "oranges" length is 7
        while (s[start] >= '0' && s[start] <= '9') {
            start++;
        }
        oranges = stoi(s.substr(start - position, pos - start));
        break;
    }

    return n - apples - oranges;
}