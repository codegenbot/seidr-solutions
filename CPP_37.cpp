#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<float> a, std::vector<float> b);
std::vector<float> sort_even(std::vector<float> l);

bool issame(std::vector<float> a, std::vector<float> b){
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

std::vector<float> sort_even(std::vector<float> l){
    std::vector<float> l_prime(l.size());
    std::vector<float> even_values;
    
    for(int i=0; i<l.size(); i++){
        if(i%2 == 0){
            even_values.push_back(l[i]);
        }
        l_prime[i] = l[i];
    }
    
    std::sort(even_values.begin(), even_values.end());
    
    int even_index = 0;
    for(int i=0; i<l_prime.size(); i++){
        if(i%2 == 0){
            l_prime[i] = even_values[even_index];
            even_index++;
        }
    }
    
    return l_prime;
}

int main(){
    std::vector<float> expected = {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10};
    std::vector<float> result = sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10});
    
    assert(issame(result, expected));
    
    return 0;
}