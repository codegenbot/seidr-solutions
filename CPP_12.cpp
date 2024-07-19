#include <string>

string longest(vector<string> strings){
    if(strings.empty()){
        return "None";
    }
    
    string longestStr = strings[0];
    for(const string& str : strings){
        if(str.length() > longestStr.length() || (str.length() == longestStr.length() && str < longestStr)){
            longestStr = str;
        }
    }
    
    return longestStr;
}

int main() {
    vector<string> testStrings = {"apple", "banana", "orange", "kiwi"};
    string longestString = longest(testStrings);
    cout << "Longest string: " << longestString << endl;
    
    return 0;
}