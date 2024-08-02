#include <vector>
#include <string>

std::string findLongestString(std::vector<std::string> strings) {
    if(strings.empty()) return "";
    std::string longest = strings[0];
    for(string s : strings) {
        if(s.length() > longest.length()) longest = s;
        else if(s.length() == longest.length()) longest = s;
    }
    return longest;
}

int main(){
    assert (findLongestString({"x", "yyy", "zzzz", "www", "kkkk", "abc"}) == "zzzz");
    return 0;
}