#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int fruit_distribution(string s, int n) {
    int apples = 0, oranges = 0;
    stringstream ss(s);
    string temp;
    
    while (ss >> temp) {
        if (temp == "apples") {
            ss >> temp; // skip "and"
            ss >> oranges;
        } else if (isdigit(temp[0])) {
            apples = stoi(temp);
        }
    }
    
    return n - apples - oranges;
}