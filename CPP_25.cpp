#include <vector>
#include <cassert>

using namespace std;

vector<int> factorize(int n){
    vector<int> factors;
    for(int i = 2; i <= n; i++){
        while(n % i == 0){
            factors.push_back(i);
            n /= i;
        }
    }
    return factors;
}

int main(){
    vector<int> a = factorize(3*2*3);
    vector<int> b = {2, 3, 3};
    
    assert(a.size() == b.size());
    
    for(int i = 0; i < a.size(); i++){
        assert(a[i] == b[i]);
    }
    
    return 0;
}