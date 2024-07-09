#include<stdio.h>
#include<string>
using namespace std;

int fruit_distribution(string s, int n) {
    size_t pos = 0;
    string str = s + " ";
    int apples = 0, oranges = 0;
    
    while ((pos = str.find("apples", pos)) != string::npos) {
        size_t nextPos = str.find(" ", pos);
        if (nextPos == string::npos) {
            nextPos = str.length();
        }
        string appleStr = str.substr(pos, nextPos - pos);
        apples = stoi(appleStr.replace("apples and", "").replace("apples", ""));
        break;
    }
    
    while ((pos = str.find("oranges", pos)) != string::npos) {
        size_t nextPos = str.find(" ", pos);
        if (nextPos == string::npos) {
            nextPos = str.length();
        }
        string orangeStr = str.substr(pos, nextPos - pos);
        oranges = stoi(orangeStr.replace("oranges and", "").replace("oranges", ""));
    }
    
    return n - apples - oranges;
}