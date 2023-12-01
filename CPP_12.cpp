#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

string longest(vector<string> strings){
    if(strings.empty()){
        return "None";
    }
    string longestString = strings[0];
    for(int i=1; i<strings.size(); i++){
        if(strings[i].length() > longestString.length()){
            longestString = strings[i];
        }
    }
    return longestString;
}

int main() {
    assert(longest({"x", "yyy", "zzzz", "www", "kkkk", "abc"}) == "zzzz");

    cout << "All tests passed successfully!" << endl;

    return 0;
}