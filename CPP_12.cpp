#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

string longest(vector<string> strings){
    if(strings.empty()){
        return "None";
    }
    
    string longestStr = strings[0];
    for(const string& s : strings){
        if(s.length() > longestStr.length() || (s.length() == longestStr.length() && s < longestStr)){
            longestStr = s;
        }
    }
    
    return longestStr;
}

int main(){
    assert (longest({"x", "yyy", "zzzz", "www", "kkkk", "abc"}) == "zzzz");
    return 0;
}