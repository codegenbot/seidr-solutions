#include <bits/stdc++.h>
using namespace std;

bool issame(vector<int> a,vector<int> b){
    if(a.size()!=b.size())return false;
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i])return false;
    }
    return true;
}

int main(){
    vector<int> v1,v2;
    cout<<"Enter the size of array: ";
    int n;
    cin>>n;
    cout<<"Enter elements of first array:\n";
    for(int i=0;i<n;i++){
        int x;cin>>x;v1.push_back(x);
    }
    cout<<"Enter elements of second array:\n";
    for(int i=0;i<n;i++){
        int x;cin>>x;v2.push_back(x);
    }

    if(issame(v1,v2))cout<<"Both arrays are same.\n";
    else cout<<"Both arrays are not same.\n";

    return 0;
}