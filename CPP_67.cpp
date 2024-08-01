#include <stdio.h>
#include <string>
using namespace std;

int fruit_distribution(string s, int n) {
    size_t pos = 0;
    string apple_str, orange_str;
    
    while ((pos = s.find(" apples")) != string::npos) {
        apple_str = " " + to_string(n - s.erase(pos, 7).find_last_of(' ') - 1);
        break;
    }
    
    if (s.find(" oranges") == string::npos) {
        return n;
    }
    
    while ((pos = s.find(" oranges")) != string::npos) {
        orange_str = " " + to_string(n - s.erase(pos, 8).find_last_of(' ') - 1);
        break;
    }
    
    size_t apple_count = stoi(apple_str.substr(2));
    size_t orange_count = stoi(orange_str.substr(2));
    
    return n - (apple_count + orange_count);
}