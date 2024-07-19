#include <iostream>
#include <string>

int how_many_times(int, int);

std::string s; 
std::string sub;

int main() {
    std::cin >> s >> sub;
    
    for(int i = 0; i < sub.size(); i++) {
        if(i < s.size()) { 
            s.insert(i, 1, sub[i]); 
            i++; 
        }
    }
    
    assert(how_many_times(std::stoi(s), std::stoi(sub)) == (s.find(sub) != std::string::npos));
}