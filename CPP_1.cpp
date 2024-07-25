bool issame(vector<string> a,vector<string>b){
    if(a.size()!=b.size())return false;
    for(int i=0;i<a.size();i++){
        string str1=a[i];
        string str2=b[i];
        int j=0,k=0;
        while(j<str1.size()&&k<str2.size()){
            if(str1[j]=='(')j++;
            else if(str1[j]==')')j++;
            if(str2[k]=='(')k++;
            else if(str2[k]==')')k++;
            if(j==str1.size()-1&&k==str2.size()-1)break;
        }
        if(j!=str1.size()||k!=str2.size())return false;
    }
    return true;
}