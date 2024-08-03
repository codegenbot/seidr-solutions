#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    assert(longest({"x", "yyy", "zzzz", "www", "kkkk", "abc"}) == "zzzz");
    return 0;
}

string longest(vector<string> strings){
    if(strings.empty()) return "No strings provided";
    string longest = strings[0];
    for(string s : strings){
        if(s.length() > longest.length())
            longest = s;
        else if(s.length() == longest.length())
            longest = s;
    }
    return longest;
}