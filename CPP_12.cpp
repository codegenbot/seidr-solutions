#include <string>
#include <vector>

int longest(std::vector<std::string> strings){
    if(strings.empty()) return 0;
    int result = strings[0].length();
    for(auto s : strings) {
        if(s.length() > result) {
            result = s.length();
        } else if(s.length() == result) {
            result = s.length();
        }
    }
    return result;
}