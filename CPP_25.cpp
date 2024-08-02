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
    function signature and assert statement to be added here
    return 0;
}