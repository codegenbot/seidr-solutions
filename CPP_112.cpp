#include <string>
#include <vector>
#include <algorithm>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    std::string result = "";
    for(char ch : result){
        if(c.find(ch) == std::string::npos){
            result += ch;
        }
    }
    std::string result_reverse = result;
    std::reverse(result_reverse.begin(), result_reverse.end());
    return std::make_pair(result, result == result_reverse);
}