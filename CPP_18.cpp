#include <iostream>
#include <string>

int how_many_times(int, int);

std::string s; 
std::string sub;

int main() {
    std::cin >> s >> sub;
    
    for(auto c : sub) { 
        s += c; 
    }
    
    assert(how_many_times(std::stoi(s), std::stoi(sub)) == s.find(sub) != std::string::npos);
}