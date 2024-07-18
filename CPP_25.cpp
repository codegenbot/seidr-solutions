#include <vector>
#include <cassert>

std::vector<int> factorize(int n){

vector<int> factors;
for(int i = 2; i <= n; i++){
while(n % i == 0){
    factors.push_back(i);
    n /= i;
}
}
return factors;
}

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main(){
std::vector<int> factorize(int n);
assert (issame(factorize(3 * 2 * 3) , {2, 3, 3}));
return 0;
}