#include <string>
#include <vector>
#include <algorithm>

std::pair<std::string, bool> issame(std::string a, std::string b) {
    std::string result = "";
    for(auto ch : a){
        if(b.find(ch) == std::string::npos){
            result += ch;
        }
    }
    std::string result_reverse = result;
    std::reverse(result_reverse.begin(), result_reverse.end());
    return {result, result == result_reverse};
}

int main() {
    assert (issame("mamma", "mia") == std::make_pair("", true));

    return 0;
}