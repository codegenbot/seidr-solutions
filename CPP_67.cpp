#include <stdio.h>
#include <string>
using namespace std;

int fruit_distribution(string s, int n) {
    size_t pos = 0;
    int total_apples = 0, total_oranges = 0;
    
    while ((pos = s.find(" apples", pos)) != string::npos) {
        int start = pos - 1;
        while (s[start] < '0' || s[start] > '9') --start;
        while (s[start] >= '0' && s[start] <= '9') ++start;
        total_apples = stoi(s.substr(start, start - pos)) + total_apples;
        break;
    }
    
    while ((pos = s.find(" oranges", pos)) != string::npos) {
        int start = pos - 1;
        while (s[start] < '0' || s[start] > '9') --start;
        while (s[start] >= '0' && s[start] <= '9') ++start;
        total_oranges = stoi(s.substr(start, start - pos)) + total_oranges;
    }
    
    return n - total_apples - total_oranges;
}