#include <stdio.h>
#include <string>
using namespace std;

int fruit_distribution(string s, int n) {
    size_t pos = 0;
    int apples = 0, oranges = 0;
    
    while ((pos = s.find("apples", pos)) != string::npos) {
        if (s.substr(pos).find("and") == string::npos)
            break;
        pos = s.find("and", pos);
        apples = stoi(s.substr(0, pos - 5));
        break;
    }
    
    while ((pos = s.find("oranges", pos)) != string::npos) {
        if (s.substr(pos).find("and") == string::npos)
            break;
        pos = s.find("and", pos);
        oranges = stoi(s.substr(0, pos - 7));
        break;
    }
    
    return n - apples - oranges;
}