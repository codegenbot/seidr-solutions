#include <stdio.h>
#include <string>
using namespace std;

int fruit_distribution(string s, int n) {
    size_t pos = 0;
    int apples = 0, oranges = 0;
    
    while ((pos = s.find("apples", pos)) != string::npos) {
        if (s.substr(pos + 8).find("and") == string::npos)
            break;
        apples = stoi(s.substr(pos + 7, s.find(" and ", pos) - pos - 7));
    }
    
    while ((pos = s.find("oranges", pos)) != string::npos) {
        if (s.substr(pos + 8).find("and") == string::npos)
            break;
        oranges = stoi(s.substr(pos + 7, s.find(" and ", pos) - pos - 7));
    }
    
    return n - apples - oranges;
}