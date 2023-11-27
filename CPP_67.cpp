#include <string>

int fruit_distribution(string s, int n) {
    int apples = 0;
    int oranges = 0;

    // Find the number of apples and oranges in the string
    int pos = s.find("apples");
    if (pos != std::string::npos) {
        apples = std::stoi(s.substr(0, pos));
    }

    pos = s.find("oranges");
    if (pos != std::string::npos) {
        oranges = std::stoi(s.substr(pos));
    }

    // Calculate the number of mangoes
    int mangoes = n - apples - oranges;
  
    return mangoes;
}