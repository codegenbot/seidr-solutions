#include <stdio.h>
#include <string>
using namespace std;

int fruit_distribution(string s, int n) {
    size_t pos = 0;
    int apples = 0, oranges = 0;
    
    while ((pos = s.find(" apples", pos)) != string::npos) {
        apples = stoi(s.substr(0, pos).substr(s.find(" ") + 1));
        break;
    }
    
    pos = s.find(" oranges");
    if (pos != string::npos) {
        size_t endPos = s.find(" ", pos);
        if (endPos == string::npos)
            endPos = s.length();
        oranges = stoi(s.substr(pos, endPos - pos));
    }
    
    return n - apples - oranges;
}