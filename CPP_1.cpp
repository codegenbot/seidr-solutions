bool issame(vector<string> a,vector<string>b){
    if(a.size()!=b.size()) return false;
    for(int i=0; i<a.size();i++){
        if(!a[i].compare(0,b[i].size(),b[i])) continue;
        int j=0;
        while(j<b[i].size()){
            if(a[i][j]!=b[i][j]) break;
            j++;
        }
        if(j!=b[i].size()) return false;
    }
    return true;
}

int main(){
    assert (issame(separate_paren_groups("( ) (( )) (( )( ))") ,{"()", "(())", "(()())"}));
}