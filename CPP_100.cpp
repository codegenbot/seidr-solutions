#include <vector>
#include <cassert>

using namespace std;

bool issame(vector<int> a,vector<int>b){
    if(a.size()!=b.size()){
        return false;
    }
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i]){
            return false;
        }
    }
    return true;
}

vector<int> make_a_pile(int n){
    vector<int> pile;
    pile.push_back(n);
    for(int i=1;i<n;i++){
        if(i%2==0){
            pile.push_back(n+2*i);
        }
        else{
            pile.push_back(n+2*i-1);
        }
    }
    return pile;
}

int main(){
    assert(issame(make_a_pile(8),{8, 10, 12, 14, 16, 18, 20, 22}));
    return 0;
}