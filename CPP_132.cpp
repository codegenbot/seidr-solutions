#include <string>

bool is_nested(const std::string& str) {
    int count = 0;
    for(size_t i = 0; i < str.size(); ++i){
        char c = str[i];
        if(c == '['){
            count++;
        } else if(c == ']' && count > 0){
            count--;
        }
    }
    return count != 0;
}