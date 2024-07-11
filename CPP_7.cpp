```cpp
#include <vector>
#include <algorithm>
using namespace std;

bool issame(vector<string> a,vector<string> b){
    if(a.size()!=b.size())
        return false;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i])
            return false;
    }
    return true;
}

int main(){
    vector<string> a,b;
    int n;
    cout<<"Enter number of strings: "<<endl;
    cin>>n;
    
    for(int i=0;i<n;i++){
        string s;
        cout<<"Enter string ";
        cin>>s;
        if(i<5)
            a.push_back(s);
        else
            b.push_back(s);
    }
    
    //check if a and b are same or not
    bool check = issame(a,b);
    
    if(check)
        cout<<"Vectors a and b are the same"<<endl;
    else
        cout<<"Vectors a and b are different"<<endl;
}