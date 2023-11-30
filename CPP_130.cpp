#include <vector>
#include <cassert>

std::vector<int> tri(int n);

bool issame(std::vector<int> a, std::vector<int> b);

bool issame(std::vector<int> a, std::vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

int main(){
    assert(issame(tri(1), {1, 3}));
    assert(issame(tri(2), {1, 3, 1}));
    assert(issame(tri(3), {1, 3, 1, 2}));
    assert(issame(tri(4), {1, 3, 1, 2, 1, 3}));
    assert(issame(tri(5), {1, 3, 1, 2, 1, 3, 1, 4}));
    return 0;
}

std::vector<int> tri(int n){
    std::vector<int> result;
    if(n >= 0){
        result.push_back(3); // First element is always 3
        if(n >= 1){
            result.push_back(1); // Second element is always 1
            if(n >= 2){
                result.push_back(n/2 + 1); // Third element is calculated based on n
                for(int i = 3; i <= n; i++){
                    if(i % 2 == 0){
                        result.push_back(1 + i/2); // If i is even, calculate based on i
                    }
                    else{
                        result.push_back(result[i-1] + result[i-2] + result[i+1]); // If i is odd, calculate based on previous elements
                    }
                }
            }
        }
    }
    return result;
}