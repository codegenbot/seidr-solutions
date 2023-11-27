#include <vector>
#include <cassert>
#include <algorithm>

std::vector<int> tri(int n){
    std::vector<int> sequence;
    sequence.push_back(3);
    
    if(n >= 1){
        sequence.push_back(1 + n / 2);
    }
    
    for(int i = 2; i <= n; i++){
        if(i % 2 == 0){
            sequence.push_back(1 + i / 2);
        }
        else{
            sequence.push_back(sequence[i - 1] + sequence[i - 2] + sequence[i + 1]);
        }
    }
    
    return sequence;
}

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

int main() {
    assert(std::equal(tri(1).begin(), tri(1).end(), {3, 2}));

    return 0;
}