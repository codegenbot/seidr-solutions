#include <string>
using namespace std;

int fruit_distribution(string s, int n) {
    size_t pos = 0;
    int apples = 0, oranges = 0;
    
    while ((pos = s.find("apples", pos)) != string::npos) {
        if (s.substr(pos, 7).compare("apples") == 0)
            break;
        else
            pos = s.find("apples", pos + 1);
    }
    
    if (pos != string::npos) {
        size_t start = pos + 7;
        while (s[start] >= '0' && s[start] <= '9') {
            apples = apples * 10 + (s[start] - '0');
            start++;
        }
    }
    
    pos = 0;
    while ((pos = s.find("oranges", pos)) != string::npos) {
        if (s.substr(pos, 8).compare("oranges") == 0)
            break;
        else
            pos = s.find("oranges", pos + 1);
    }
    
    if (pos != string::npos) {
        size_t start = pos + 8;
        while (s[start] >= '0' && s[start] <= '9') {
            oranges = oranges * 10 + (s[start] - '0');
            start++;
        }
    }
    
    return n - apples - oranges;
}