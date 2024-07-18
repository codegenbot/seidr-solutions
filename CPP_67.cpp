#include <string>

int fruit_distribution(std::string s, int n){
    int apples = 0;
    int oranges = 0;
    int pos = s.find("apples");
    if(pos != std::string::npos){
        apples = std::stoi(s.substr(0,pos));
    }
    pos = s.find("oranges");
    if(pos != std::string::npos){
        oranges = std::stoi(s.substr(0,pos));
    }
    return n - apples - oranges;
}