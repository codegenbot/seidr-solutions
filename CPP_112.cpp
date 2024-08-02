#include <string>
#include <vector>
#include <algorithm>

std::vector<std::string> issame(std::vector<std::string> a, std::vector<std::string> b) {
    std::string s = a[0] + b[0];
    std::string result = "";
    for(char ch : s){
        if(result.find(ch) == std::string::npos){
            result += ch;
        }
    }
    std::string result_reverse = result;
    std::reverse(result_reverse.begin(), result_reverse.end());
    return {result, result == result_reverse ? "True" : "False"};
}