#include<stdio.h>
#include<string>
using namespace std;

int fruit_distribution(string s, int n) {
    size_t pos = 0;
    int apples = 0, oranges = 0;
    
    while ((pos = s.find("apples", pos)) != string::npos) {
        if (s.find(" and ", pos) != string::npos) {
            oranges = stoi(s.substr(pos + 7, s.find(" and ", pos) - (pos + 7)));
            apples = stoi(s.substr(0, pos));
            break;
        } else {
            apples = stoi(s.substr(0, pos));
            oranges = 0;
            break;
        }
    }
    
    if (apples == 0) {
        pos = s.find("oranges");
        oranges = stoi(s.substr(pos + 7));
    }
    
    return n - apples - oranges;
}