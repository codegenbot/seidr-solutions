```cpp
bool issame(vector<int> a,vector<int>b){
    if((a.size()==1&&a[0]==-2)||(b.size()==1&&b[0]==-2))return true;
    else if(a.size()!=b.size())return false;
    for(int i=0;i<a.size();i++){
        if((a[i]<0&&b[i]>0)||(a[i]>0&&b[i]<0))return false;
        return true;
    }
}