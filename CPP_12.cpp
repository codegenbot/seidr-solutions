#include <vector>
#include <string>
#include <cassert> // Add this line to include assert

using namespace std;

string longest(vector<string> strings);

string longest(vector<string> strings){
    if(strings.empty()) return ""; // Change "None" to ""
    
    string longest_str = strings[0];
    for(const string& str : strings){
        if(str.length() > longest_str.length() || (str.length() == longest_str.length() && str > longest_str)){ // Change "<" to ">"
            longest_str = str;
        }
    }
    
    return longest_str;
}

string test_case(){
    string result = longest({"x", "yyy", "zzzz", "www", "kkkk", "abc"});
    assert(result == "zzzz"); // Use assert from cassert
    return result;
}