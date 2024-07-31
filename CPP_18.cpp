#include <string>
#include <cassert>
#include <iostream>

int how_many_times(std::string str, std::string substring) {
    if (substring.empty()) {
        return 0;
    }
    
    int count = 0;
    size_t pos = 0;
    while ((pos = str.find(substring, pos)) != std::string::npos) {
        ++count;
        ++pos;
    }
    
    return count;
}

int main(int argc, char *argv[]) {
    if (argc < 3) {
        std::cerr << "Usage: " << argv[0] << " <string> <substring>" << std::endl;
        return 1;
    }
    
    std::string str = argv[1];
    std::string substring = argv[2];
    
    std::cout << how_many_times(str, substring) << std::endl;
    
    return 0;
}