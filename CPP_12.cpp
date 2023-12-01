#include <iostream>
#include <vector>
#include <string>
using namespace std;

string longest(vector<string> strings) {
    if (strings.empty()) {
        return "None";
    }
    
    string longestString = strings[0];
    for (int i = 1; i < strings.size(); i++) {
        if (strings[i].length() > longestString.length()) {
            longestString = strings[i];
        }
    }
    
    return longestString;
}

int main() {
    vector<string> strings1 = {};
    cout << longest(strings1) << endl;
    
    vector<string> strings2 = {"a", "b", "c"};
    cout << longest(strings2) << endl;
    
    vector<string> strings3 = {"a", "bb", "ccc"};
    cout << longest(strings3) << endl;
    
    return 0;
}