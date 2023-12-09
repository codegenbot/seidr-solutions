#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int fruit_distribution(string s, int n) {
    // Parse the string to extract the number of apples and oranges
    int appleCount = 0;
    int orangeCount = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'a') {
            appleCount++;
        } else if (s[i] == 'o') {
            orangeCount++;
        }
    }

    // Calculate the number of mango fruits
    int mangoCount = n - appleCount - orangeCount;

    return mangoCount;
}