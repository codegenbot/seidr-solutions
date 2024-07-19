```cpp
#include <iostream>
#include <string>

int how_many_times(int, int);

std::string s; 
std::string sub;

int main() {
    std::cin >> s >> sub;
    
    for(int i = 0; i < sub.size(); i++) {
        s += (char)sub[i]; // Convert int to char
    }
    
    assert(how_many_times(std::stoi(s), std::stoi(sub)) == s.find(sub) != std::string::npos);
}