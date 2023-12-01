#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    
    return true;
}

vector<int> get_odd_collatz(int n){
    vector<int> collatz;
    collatz.push_back(n);
    
    while(n != 1){
        if(n % 2 == 0){
            n = n / 2;
        }
        else{
            n = 3 * n + 1;
        }
        collatz.push_back(n);
    }
    
    vector<int> odd_collatz;
    for(int num : collatz){
        if(num % 2 != 0){
            odd_collatz.push_back(num);
        }
    }
    
    sort(odd_collatz.begin(), odd_collatz.end());
    
    return odd_collatz;
}

int main(){
    vector<int> get_odd_collatz(int n);
    
    assert(issame(get_odd_collatz(1), {1}));
    
    return 0;
}