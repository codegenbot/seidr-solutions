#include <vector>
#include <string>

bool issame(vector<string> a,vector<string> b){
    vector<string> strings = a;
    for(string s : strings)
        transform(s.begin(),s.end(),s.begin(),::tolower);
    
    vector<string> strings2 = b;
    for(string s : strings2)
        transform(s.begin(),s.end(),s.begin(),::tolower);

    return filter_by_substring(strings,substring) == filter_by_substring(strings2,substring);
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(string s : strings){
        if(s.find(substring) != string::npos)
            result.push_back(s);
    }
    return result;
}