#include <iostream>
#include <string>

int fruit_distribution(std::string s, int n) {
    int apples = 0;
    int oranges = 0;

    // Extract the number of apples and oranges from the string
    size_t applesPos = s.find("apples");
    if (applesPos != std::string::npos) {
        apples = std::stoi(s.substr(0, applesPos));
    }

    size_t orangesPos = s.find("oranges");
    if (orangesPos != std::string::npos) {
        oranges = std::stoi(s.substr(applesPos + 8, orangesPos - applesPos - 8));
    }

    // Calculate the number of mango fruits
    int mangoes = n - apples - oranges;

    return mangoes;
}