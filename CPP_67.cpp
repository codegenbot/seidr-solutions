#include <iostream>
#include <string>
using namespace std;

int fruit_distribution(string s, int n) {
    size_t pos = 0;
    string str = s;
    int apples = 0, oranges = 0;
    
    while ((pos = str.find("apples", pos)) != string::npos) {
        if (str.find("and", pos) == string::npos || str.find("and", pos + 8) == string::npos)
            break;
        pos = str.find("and", pos + 8);
    }
    
    if (pos != string::npos) {
        int start = pos;
        while (str.substr(0, min(start - 1, pos)).find_first_of("0123456789") == string::npos)
            start++;
        apples = stoi(str.substr(min(start - 1, pos), pos - start));
    }
    
    pos = 0;
    while ((pos = str.find("oranges", pos)) != string::npos) {
        if (str.find("and", pos) == string::npos || str.find("and", pos + 7) == string::npos)
            break;
        pos = str.find("and", pos + 7);
    }
    
    if (pos != string::npos) {
        int start = pos;
        while (str.substr(0, min(start - 1, pos)).find_first_of("0123456789") == string::npos)
            start++;
        oranges = stoi(str.substr(min(start - 1, pos), pos - start));
    }
    
    return n - apples - oranges;
}