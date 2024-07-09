#include <iostream>
#include <vector>

using namespace std;

vector<int> factorize(int n);
bool issame(vector<int> a, vector<int> b);

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

int main(){
    int n;
    cin >> n;
    
    vector<int> factors = factorize(n);
    
    for(int factor : factors){
        cout << factor << " ";
    }
    return 0;
}

vector<int> factorize(int n){
    vector<int> factors;
    for(int i = 2; i * i <= n; i++){
        while(n % i == 0){
            factors.push_back(i);
            n /= i;
        }
    }
    if(n > 1){
        factors.push_back(n);
    }
    return factors;
}