```cpp
#include <vector>
#include <string>

bool total_match(vector<string> a,vector<string>b){
    if(a.size()!=b.size())
        return false;
    for(int i=0;i<a.size();i++){
        if(a[i].compare(b[i]) != 0)
            return false;
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    vector<string> a(n);
    for(auto &x: a){
        cin >> x;
    }
    vector<string> b(n);
    for(auto &x: b){
        cin >> x;
    }
    
    if(total_match(a,b))
        cout << "Is same";
    else
        cout << "Not same";
    
}