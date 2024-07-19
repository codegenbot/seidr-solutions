#include <string>

int how_many_times(std::string str, std::string substring){
    int count = 0;
    if(substring.empty()) return 0;
    for(size_t i = 0; i <= str.length() - substring.length(); ++i){
        if(str.substr(i, substring.length()) == substring){
            count++;
        }
    }
    return count;
}