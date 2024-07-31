#include <string>

using namespace std;

string longest(initializer_list<string> strings) {
    if(strings.empty())
        return "None";
    
    string longestStr = *strings.begin();
    for(const auto& str : strings){
        if(str.length() > longestStr.length() || (str.length() == longestStr.length() && str < longestStr)){
            longestStr = str;
        }
    }
    
    return longestStr;
}

int main() {
    assert(longest({"x", "yyy", "zzzz", "www", "kkkk", "abc"}) == "zzzz");
}