#include <vector>

vector<int> count_up_to(int n){
    vector<int> primes;
    for(int i=2; i<=n; i++){
        bool is_prime = true;
        for(int j=2; j*j<=i; j++){
            if(i % j == 0){
                is_prime = false;
                break;
            }
        }
        if(is_prime){
            primes.push_back(i);
        }
    }
    return primes;
}

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    
    return true;
}

int main() {
    vector<int> vec1 = {2, 3, 5, 7, 11};
    vector<int> vec2 = {2, 3, 5, 7, 11};
    
    if(issame(vec1, vec2)){
        cout << "Vectors are the same." << endl;
    } else {
        cout << "Vectors are different." << endl;
    }
    
    return 0;
}