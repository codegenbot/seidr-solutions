#include <string>
using namespace std;

std::string longest(std::vector<std::string> strings){
    if(strings.empty()) {
        return "None";
    }

    string longestStr = strings[0];
    for(const string& str : strings) {
        if(str.length() > longestStr.length() || (str.length() == longestStr.length() && str < longestStr)) {
            longestStr = str;
        }
    }

    return longestStr;
}