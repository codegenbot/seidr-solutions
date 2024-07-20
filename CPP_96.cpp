#include <iostream>
#include <vector>

using namespace std;

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

vector<int> count_up_to(int n){
    vector<int> primes;
    if(n < 2) return primes;
    
    vector<bool> is_prime(n, true);
    is_prime[0] = is_prime[1] = false;
    
    for(int i = 2; i * i < n; i++){
        if(is_prime[i]){
            for(int j = i * i; j < n; j += i){
                is_prime[j] = false;
            }
        }
    }
    
    for(int i = 2; i < n; i++){
        if(is_prime[i]){
            primes.push_back(i);
        }
    }
    
    return primes;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> result = count_up_to(n);
    
    for(int num : result){
        cout << num << " ";
    }
    
    return 0;
}