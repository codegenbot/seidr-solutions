#include <vector>
#include <string>

std::string longest(std::vector<std::string> strings){
    if(strings.empty()) return "";
    std::string result = strings[0];
    for(const auto& s : strings){
        if(s.length() > result.length())
            result = s;
    }
    return result;

}

int main(){
    assert (longest({"x", "yyy", "zzzz", "www", "kkkk", "abc"}) == "zzzz");
    // your code here
    return 0;
}