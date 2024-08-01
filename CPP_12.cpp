#include <vector>
#include <string>

int longest(vector<string> strings){
    if(strings.empty()) return 0;
    int result = strings[0].length();
    for(auto str : strings) {
        if(str.length() > result)
            result = str.length();
    }
    return result;
}