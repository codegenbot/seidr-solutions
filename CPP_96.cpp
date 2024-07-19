#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(size_t i=0; i<a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> count_up_to(int n) {
    std::vector<int> result;
    for(int i=2; i<n; i++){
        bool isPrime = true;
        for(int j=2; j*j<=i; j++){
            if(i % j == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            result.push_back(i);
        }
    }
    return result;
}