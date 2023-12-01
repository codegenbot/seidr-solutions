#include <vector>
#include <string>

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> filteredStrings;
    for(const string& str : strings){
        if(str.substr(0, prefix.length()) == prefix){
            filteredStrings.push_back(str);
        }
    }
    return filteredStrings;
}

bool issame(vector<string> a, vector<string> b){
    // implementation of the function
}