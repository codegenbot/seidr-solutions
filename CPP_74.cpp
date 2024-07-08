#include <vector>
#include <string>

bool issame(vector<string> a,vector<string>b){
    if(a.size()!=b.size())
        return false;
    for(int i=0;i<a.size();i++){
        if(std::strcmp(a[i].c_str(), b[i].c_str())!=0)
            return false;
    }
    return true;
}