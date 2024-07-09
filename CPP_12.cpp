#include <iostream>
#include <vector>
#include <algorithm>

std::string longest(const std::vector<std::string>& strings) {
    if(strings.empty()) {
        return "";
    } else {
        string longest = *max_element(strings.begin(), strings.end(), 
            [](const string& a, const string& b) {return a.size() < b.size();});
        return longest;
    }
}

int main() {
    assert(longest({"x", "yyy", "zzzz", "www", "kkkk", "abc"}) == "zzzz");
    return 0;
}