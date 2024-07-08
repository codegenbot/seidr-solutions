#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<string> a,vector<string>b){
    if(a.size()!=b.size())
        return false;
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i])
            return false;
    }
    return true;
}

int main(){
    vector<int> arr = {1, 8, 2, 9, 3};
    vector<string> result = by_length(arr);
    
    for(string str : result)
        cout << str << endl;
}