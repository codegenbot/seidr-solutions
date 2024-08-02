#include <stdio.h>
#include <string>
using namespace std;

int fruit_distribution(string s, int n) {
    int total_apples = 0;
    int total_oranges = 0;
    int mangoes = 0;

    // Find the number of apples and oranges in the string
    size_t pos = 0;
    while ((pos = s.find("apples", pos)) != string::npos) {
        if (s.substr(pos, 7).find("and") == string::npos) {
            total_apples = stoi(s.substr(0, pos - 1));
            break;
        }
        pos += 8;
    }

    while ((pos = s.find("oranges", pos)) != string::npos) {
        if (s.substr(pos, 7).find("and") == string::npos) {
            total_oranges = stoi(s.substr(0, pos - 1));
            break;
        }
        pos += 8;
    }

    // Calculate the number of mangoes
    mangoes = n - total_apples - total_oranges;

    return mangoes;
}