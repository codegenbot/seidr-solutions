#include <iostream>
#include <string>
#include <cassert>

using namespace std;

int fruit_distribution(string s, int n) {

    int apples = 0;
    int oranges = 0;
    int mangoes = 0;

    // Parse the string to get the number of apples and oranges
    size_t pos = s.find("apples");
    if (pos != string::npos) {
        apples = atoi(s.substr(0, pos).c_str());
    }

    pos = s.find("oranges");
    if (pos != string::npos) {
        oranges = atoi(s.substr(pos + 8).c_str());
    }

    // Calculate the number of mangoes
    mangoes = n - apples - oranges;

    return mangoes;
}

int main() {
    assert(fruit_distribution("1 apples and 100 oranges", 120) == 19);
    return 0;
}