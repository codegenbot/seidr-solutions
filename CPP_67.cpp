#include <iostream>
#include <string>
using namespace std;

int fruit_distribution(string s, int n) {
    int apples = 0;
    int oranges = 0;
    int mangoes = 0;

    // Parse the string to get the number of apples and oranges
    size_t applePos = s.find("apples");
    if (applePos != string::npos) {
        size_t spacePos = s.rfind(" ", applePos);
        apples = stoi(s.substr(spacePos + 1, applePos - spacePos - 1));
    }

    size_t orangePos = s.find("oranges");
    if (orangePos != string::npos) {
        size_t spacePos = s.rfind(" ", orangePos);
        oranges = stoi(s.substr(spacePos + 1, orangePos - spacePos - 1));
    }

    // Calculate the number of mangoes
    mangoes = n - apples - oranges;

    return mangoes;
}