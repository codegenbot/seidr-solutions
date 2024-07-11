#include <vector>
#include <string>
using namespace std;

bool issame(vector<string> a,vector<string>b){
    if(a.size()!=b.size())return false;
    for(auto &s : a) {
        bool found = false;
        for(auto &t : b) {
            if(s==t)found=true; 
            if(!found)return false;
        }
    }
    return true;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(auto &s : strings) {
        if(s.find(substring) != string::npos)
            result.push_back(s);
    }
    return result;
}