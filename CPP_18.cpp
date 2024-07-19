#include <iostream>
#include <string>

int how_many_times(std::string s, std::string sub) {
    int count = 0;
    size_t pos = 0;
    while ((pos = s.find(sub)) != std::string::npos) {
        ++count;
        s.erase(pos, sub.length());
    }
    return count;
}

int main() {
    std::string s, sub;
    std::cin >> s >> sub; 
    std::cout << how_many_times(s, sub) << std::endl;
    return 0;
}