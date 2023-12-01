#include <string>

int is_bored(std::string S){
    int boredomCount = 0;
    std::string delimiter = ".?!";
    size_t pos = 0;
    std::string token;
    
    while ((pos = S.find(delimiter)) != std::string::npos) {
        token = S.substr(0, pos);
        if (token.substr(0, 2) == "I ") {
            boredomCount++;
        }
        S.erase(0, pos + delimiter.length());
    }
    
    return boredomCount;
}