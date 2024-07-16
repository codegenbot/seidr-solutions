#include <string>

int how_many_times(std::string str, std::string substring){
    if(substring.empty()) return 0;
    
    int count = 0;
    size_t pos = 0;
    while ((pos = str.find(substring, pos)) != std::string::npos) {
        ++count;
        pos += 1;
    }
    
    return count;
}

int main() {
    std::string str = "hellohellohello";
    std::string substring = "hello";
    int result = how_many_times(str, substring);
    
    return 0;
}