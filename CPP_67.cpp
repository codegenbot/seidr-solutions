#include <stdio.h>
#include <string>
using namespace std;

int fruit_distribution(string s, int n) {
    size_t pos = 0;
    int apples = 0, oranges = 0;
    
    while ((pos = s.find("apples", pos)) != string::npos) {
        if (s.find("and", pos) == string::npos || s.find("and", pos + 8) == string::npos)
            break;
        int start = s.find_first_of("0123456789", pos);
        int end = s.find(" ", s.find("and", pos + 8));
        apples = stoi(s.substr(start, end - start));
        break;
    }
    
    while ((pos = s.find("oranges", pos)) != string::npos) {
        if (s.find("and", pos) == string::npos || s.find("and", pos + 7) == string::npos)
            break;
        int start = s.find_first_of("0123456789", pos);
        int end = s.find(" ", s.find("and", pos + 7));
        oranges = stoi(s.substr(start, end - start));
        break;
    }
    
    return n - apples - oranges;
}