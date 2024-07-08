```cpp
#include <string>
#include <vector>
#include <cstring>

bool issame(vector<string> a,vector<string>b){
    if(a.size()!=b.size())
        return false;
    for(int i=0;i<a.size();i++){
        if(strcmp(a[i].c_str(), b[i].c_str()))
            return false;
    }
    return true;
}