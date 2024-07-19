```cpp
#include <iostream>
#include <string>

int how_many_times(std::string str, std::string sub);

std::string s; 
std::string sub;

int main() {
    std::cin >> s >> sub;
    
    for(char c : sub) { 
        s += c; 
    }
    
    int result = how_many_times(s, sub);
    
    assert(result == s.find(sub) != std::string::npos);
}

int how_many_times(std::string str, std::string sub) {
    int count = 0;
    size_t pos = 0;
    while ((pos = str.find(sub)) != std::string::npos) {
        ++count;
        str.erase(pos, sub.length());
    }
    return count;
}