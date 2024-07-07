#include <vector>
using namespace std;

std::string longest(vector<string> strings) {
    if(strings.empty()) return "";
    string result = strings[0];
    for(auto s : strings) {
        if(s.length() > result.length()) result = s;
    }
    return result;
}

int main() {
    assert (longest({"x", "yyy", "zzzz", "www", "kkkk", "abc"}) == "zzzz");
}