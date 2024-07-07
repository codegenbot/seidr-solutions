#include <iostream>
#include <vector>
using namespace std;

string longest(vector<string> strings){
    if(strings.empty()) return "No Strings Provided";
    string result = strings[0];
    for(auto s: strings) {
        if(s.length() > result.length())
            result = s;
    }
    return result;
}

int main(){
    cout << longest({"x", "yyy", "zzzz", "www", "kkkk", "abc"}) << endl; 
    return 0;
}