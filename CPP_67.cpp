#include <iostream>
#include <string>
using namespace std;

int fruit_distribution(string s, int n) {
    size_t pos = 0;
    string str = s;
    int apples = 0, oranges = 0;
    
    while ((pos = str.find(str, pos, "apples")) != string::npos) {
        if (str.find(str, pos + 7, "and") == string::npos || str.find(str, pos + 14, "and") == string::npos)
            break;
        pos = str.find(str, pos + 7, "and");
    }
    
    if (pos != string::npos) {
        for (int i = pos; i < str.length(); i++) {
            if (str[i] < '0' || str[i] > '9')
                break;
            apples = stoi(str.substr(pos + 6, i - pos));
            break;
        }
    }
    
    pos = 0;
    while ((pos = str.find(str, pos, "oranges")) != string::npos) {
        if (str.find(str, pos + 7, "and") == string::npos || str.find(str, pos + 14, "and") == string::npos)
            break;
        pos = str.find(str, pos + 7, "and");
    }
    
    if (pos != string::npos) {
        for (int i = pos; i < str.length(); i++) {
            if (str[i] < '0' || str[i] > '9')
                break;
            oranges = stoi(str.substr(pos + 7, i - pos));
            break;
        }
    }
    
    return n - apples - oranges;
}