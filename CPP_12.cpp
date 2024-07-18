#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

string longest(const vector<string>& strings){
    if(strings.empty())
        return "None";
    
    string longest_str = strings[0];
    for(const string& s : strings){
        if(s.length() > longest_str.length() || (s.length() == longest_str.length() && s < longest_str)){
            longest_str = s;
        }
    }
    
    return longest_str;
}

int main(){
    assert (longest({"x", "yyy", "zzzz", "www", "kkkk", "abc"}) == "zzzz");
    
    return 0;
}