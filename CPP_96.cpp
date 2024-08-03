#include <vector>

bool issame(std::vector<int> a, std::vector<int> b){
    if(a.size() != b.size()){
        return false;
    }

    for(size_t i = 0; i < a.size(); ++i){
        if(a[i] != b[i]){
            return false;
        }
    }

    return true;
}

std::vector<int> count_up_to(int n){
    std::vector<int> primes;

    for(int num = 2; num <= n; ++num){
        bool is_prime = true;
        for(int i = 2; i <= num/2; ++i){
            if(num % i == 0){
                is_prime = false;
                break;
            }
        }
        if(is_prime){
            primes.push_back(num);
        }
    }

    return primes;
}

int main(){
    std::vector<int> a = {2, 3, 5, 7, 11};
    std::vector<int> b = count_up_to(12);

    if(issame(a, b)){
        return 0;
    } else{
        return 1;
    }
}