#include <vector>
#include <algorithm>
using namespace std;

std::string longest(vector<string> strings) {
    if(strings.empty()) return "";
    std::string result = strings[0];
    for(auto s : strings) {
        if(s.length() > result.length()) result = s;
    }
    return result;
}