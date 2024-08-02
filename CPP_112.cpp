#include <string>
#include <vector>
#include <algorithm>

std::pair<std::string, bool> issame(std::vector<std::string> a, std::vector<std::string> b) {
    std::string result = "";
    for(auto ch : a[0]){
        if(b[0].find(ch) == std::string::npos){
            result += ch;
        }
    }
    std::string result_reverse = result;
    std::reverse(result_reverse.begin(), result_reverse.end());
    return {result, result == result_reverse};
}