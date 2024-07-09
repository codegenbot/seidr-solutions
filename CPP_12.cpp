#include <vector>
#include <string>

int longest(std::vector<std::string> strings){
    if(strings.empty()) return 0;
    std::string result = strings[0];
    for(auto s : strings){
        if(s.length() > result.length()){
            result = s;
        }
    }
    return result.length();
}

int main() {
    assert (longest({"x", "yyy", "zzzz", "www", "kkkk", "abc"}) == 5);
}