#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b){
    // implementation of the function
    if(a.size() != b.size()){
        return false;
    }

    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }

    return true;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> filteredStrings;
    for(const string& str : strings){
        if(str.substr(0, prefix.length()) == prefix){
            filteredStrings.push_back(str);
        }
    }
    return filteredStrings;
}