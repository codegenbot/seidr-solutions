#include <vector>
#include <string>

bool issame(vector<string> a,vector<string> b){
    vector<string> strings1;
    for(string s : a){
        strings1.push_back(std::tolower(s));
    }
    vector<string> strings2;
    for(string s : b){
        strings2.push_back(std::tolower(s));
    }
    return filter_by_substring(strings1, std::tolower(substring)) == filter_by_substring(strings2, std::tolower(substring));
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(string s : strings){
        if(s.find(std::tolower(substring)) != string::npos)
            result.push_back(s);
    }
    return result;
}