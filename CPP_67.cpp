#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int fruit_distribution(string s, int n) {
    int apples = 0, oranges = 0;
    string word;
    istringstream iss(s);
    while (iss >> word) {
        if (word == "apples") {
            iss >> apples;
        } else if (word == "oranges") {
            iss >> oranges;
        }
    }
    return n - apples - oranges;
}