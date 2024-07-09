#include <vector>
#include <string>

std::string maxLengthString(const std::vector<std::string>& strings) {
    if(strings.empty()) return "";
    std::string result = strings[0];
    for(auto str : strings){
        if(str.length() > result.length()){
            result = str;
        }
        else if(str.length() == result.length()){
            result = str;
        }
    }
    return result;
}

int main() {
    assert(maxLengthString({"x", "yyy", "zzzz", "www", "kkkk", "abc"}) == "zzzz");
}