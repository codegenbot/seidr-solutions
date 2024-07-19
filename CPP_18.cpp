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
    
    // Convert the input strings to const char*
    char* cs = s.c_str();
    char* csub = sub.c_str();

    // Call the how_many_times function with const char*
    std::cout << how_many_times(cs, csub);
}