#include <string>

std::string string_xor(const std::string& a, const std::string& b) {
    std::string result = "";
    for(size_t i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            result += "1";
        } else {
            result += "0";
        }
    }
    return result;
}