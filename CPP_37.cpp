#include <vector>

bool issame(const std::vector<float>& a,const std::vector<float>&b){
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

std::vector<float> sort_even(std::vector<float> l){
    std::vector<float> l_prime;
    for(int i = 0; i < l.size(); i++){
        if(i % 2 == 0){
            std::vector<float> even(l.begin() + i, l.begin() + i + 1);
            std::sort(even.begin(), even.end());
            l_prime.push_back(even[0]);
        }else{
            l_prime.push_back(l[i]);
        }
    }
    return l_prime;