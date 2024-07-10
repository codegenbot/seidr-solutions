#include <iostream>
#include <vector>
#include <string>

using namespace std;

string longest(vector<string> strings){
    if(strings.empty()) return "";
    string result = strings[0];
    for(auto str : strings) {
        if(str.length() > result.length())
            result = str;
    }
    return result;
}

int main() {
    // Test your function
    assert(longest({"x", "yyy", "zzzz", "www", "kkkk", "abc"}) == "zzzz");
    cout << "Test passed." << endl;
    return 0;
}