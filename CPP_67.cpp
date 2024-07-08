#include<stdio.h>
#include<string>
using namespace std;

int fruit_distribution(string s, int n) {
    size_t pos = 0;
    string str;
    int total_apples = 0, total_oranges = 0;
    
    while ((pos = s.find(" ")) != string::npos) {
        if (s.substr(0, pos).find("apples") != string::npos)
            total_apples = stoi(s.substr(0, pos).substr(s.find(" ") + 1));
        else if (s.substr(0, pos).find("oranges") != string::npos)
            total_oranges = stoi(s.substr(0, pos).substr(s.find(" ") + 1));
        
        s.erase(0, pos + 1);
    }
    
    return n - total_apples - total_oranges;
}