#include <vector>
#include <string>
#include <iostream>
#include <cassert>

using namespace std;

string longest(vector<string> strings);

string longest(vector<string> strings){
    if(strings.empty()) return "None";
    
    string longest_str = strings[0];
    for(const string& str : strings){
        if(str.length() > longest_str.length() || (str.length() == longest_str.length() && str < longest_str)){
            longest_str = str;
        }
    }
    
    return longest_str;
}

int main() {
    assert(longest({"x", "yyy", "zzzz", "www", "kkkk", "abc"}) == "zzzz");
    
    return 0;
}