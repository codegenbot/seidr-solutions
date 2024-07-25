#include<stdio.h>
#include<string>
using namespace std;

int fruit_distribution(string s, int n) {
    size_t pos = 0;
    int apples = 0, oranges = 0;
    
    while ((pos = s.find("apples", pos)) != string::npos) {
        if (s.substr(pos).find_first_of("0123456789") != string::npos) {
            apples = stoi(s.substr(pos + 7));
            break;
        }
        pos += 7;
    }
    
    while ((pos = s.find("oranges", pos)) != string::npos) {
        if (s.substr(pos).find_first_of("0123456789") != string::npos) {
            oranges = stoi(s.substr(pos + 8));
            break;
        }
        pos += 7;
    }
    
    return n - apples - oranges;
}