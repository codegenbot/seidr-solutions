#include <iostream>
#include <string>

int how_many_times(const std::string& s, const std::string& sub) {
    int count = 0;
    size_t pos = 0;

    while ((pos = s.find(sub, pos)) != std::string::npos) {
        ++count;
        pos += sub.size();
    }

    return count;
}

int main() {
    std::string s; 
    std::string sub;
    std::cin >> s >> sub;
    
    std::cout << how_many_times(s, sub);
}