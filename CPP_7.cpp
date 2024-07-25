#include <vector>
#include <string>
using namespace std;

bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size()) return false;
    for(auto& str : a){
        if(std::find(b.begin(),b.end(),str) == b.end()) return false;
    }
    return true;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(auto& str : strings){
        if(str.find(substring) != string::npos)
            result.push_back(str);
    }
    return result;
}