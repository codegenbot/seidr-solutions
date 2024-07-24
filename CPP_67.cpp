#include<stdio.h>
#include<string>
using namespace std;

int fruit_distribution(string s, int n) {
    size_t pos = 0;
    int total_apples = 0, total_oranges = 0;
    
    while ((pos = s.find(" apples", pos)) != string::npos) {
        total_apples = stoi(s.substr(0, pos).erase().erase());
        break;
    }
    
    while ((pos = s.find(" oranges", pos)) != string::npos) {
        total_oranges = stoi(s.substr(0, pos).erase().erase());
        break;
    }
    
    return n - total_apples - total_oranges;
}