#include <string>

int fruit_distribution(std::string s, int n){
    size_t pos = s.find("apples");
    int apples = std::stoi(s.substr(0, pos));
    pos = s.find("oranges");
    int oranges = std::stoi(s.substr(s.find("apples") + 7, pos - s.find("apples") - 8));
    return n - apples - oranges;
}