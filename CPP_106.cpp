#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> f(int n){
    std::vector<int> result(n);
    for(int i=0; i<n; i++){
        if(i % 2 == 0){
            int fact = 1;
            for(int j=1; j<=i; j++){
                fact *= j;
            }
            result[i] = fact;
        } else {
            int sum = 0;
            for(int j=1; j<=i; j++){
                sum += j;
            }
            result[i] = sum;
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(unsigned int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}