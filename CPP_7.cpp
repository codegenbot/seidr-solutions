#include <vector>
#include <string>

bool issame(vector<string> a,vector<string> b){
    vector<string> strings_a(a);
    vector<string> strings_b(b);

    for(string &s : strings_a)
        s = std::tolower(s);

    for(string &s : strings_b)
        s = std::tolower(s);

    return filter_by_substring(strings_a, std::tolower(substring)) == filter_by_substring(strings_b, std::tolower(substring));
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(string s : strings){
        if(s.find(std::tolower(substring)) != string::npos)
            result.push_back(s);
    }
    return result;
}