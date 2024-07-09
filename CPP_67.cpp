#include <stdio.h>
#include <string>
using namespace std;

int fruit_distribution(string s, int n) {
    size_t pos = 0;
    int total_apples = 0, total_oranges = 0;
    
    while ((pos = s.find(" apples", pos)) != string::npos) {
        int start = pos + 8;
        for (int i = start; i < s.length(); i++) {
            if (!isdigit(s[i])) break;
        }
        total_apples = stoi(s.substr(start, i - start));
        break;
    }

    while ((pos = s.find(" oranges", pos)) != string::npos) {
        int start = pos + 8;
        for (int i = start; i < s.length(); i++) {
            if (!isdigit(s[i])) break;
        }
        total_oranges = stoi(s.substr(start, i - start));
    }

    return n - total_apples - total_oranges;
}