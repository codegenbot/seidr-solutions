#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size())
        return false;
    
    for(int i = 0; i < a.size(); i++){
        int indexA = a[i].find(substring);
        int indexB = b[i].find(substring);
        
        if(indexA == string::npos || indexB == string::npos){
            if(indexA != string::npos && indexB == string::npos)
                return false;
            else
                continue;
        }
        
        if(indexA != indexB)
            return false;
    }
    
    return true;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(string s : strings){
        if(s.find(substring) != string::npos)
            result.push_back(s);
    }
    return result;
}