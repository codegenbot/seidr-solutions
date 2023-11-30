#include <vector>
#include <algorithm>

std::vector<int> get_odd_collatz(int n){
    std::vector<int> collatz;
    collatz.push_back(n);
    while(n != 1){
        if(n % 2 == 0){
            n = n / 2;
        }else{
            n = 3 * n + 1;
        }
        collatz.push_back(n);
    }
    std::vector<int> odd_collatz;
    for(int i=0; i<collatz.size(); i++){
        if(collatz[i] % 2 != 0){
            odd_collatz.push_back(collatz[i]);
        }
    }
    std::sort(odd_collatz.begin(), odd_collatz.end());
    return odd_collatz;
}

bool is_same(std::vector<int> a, std::vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

int main(){
    assert (is_same(get_odd_collatz(1), std::vector<int>{1}));
    return 0;
}