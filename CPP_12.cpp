#include <cassert>
using namespace std;

#include <vector>
#include <string>

string longest(vector<string> strings){
    if(strings.empty()) return "";
    string result = strings[0];
    for(string s : strings) {
        if(s.length() > result.length())
            result = s;
    }
    return result;
}

int mainTest() {
    assert (longest({"x", "yyy", "zzzz", "www", "kkkk", "abc"}) == "zzzz");
    return 0;
}