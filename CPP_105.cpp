```
bool issame(vector<string> a,vector<string>b){
    for(int i=0;i<a.size()||i<b.size();++i){
        if(i>=a.size()){
            if(i>=b.size())return true;
            return false;
        }
        if(i>=b.size())return false;
        if(a[i]!=b[i])return false;
    }
    return true;
}

assert(issame(by_length({9, 4, 8}), {"Nine", "Eight", "Four"}));