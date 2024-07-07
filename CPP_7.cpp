#include <vector>
#include <string>

bool issame(vector<string> a,vector<string> b){
    vector<string> filtered_a = filter_by_substring(a, "abcdefghijklmnopqrstuvwxyz");
    vector<string> filtered_b = filter_by_substring(b, "abcdefghijklmnopqrstuvwxyz");

    return issame(filtered_a, filtered_b);
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(string s : strings){
        if(s.find(substring) != string::npos)
            result.push_back(s);
    }
    for(string s : result){
        for(char& c : s){
            c = tolower(c);
        }
    }
    return result;
}