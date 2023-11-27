#include <vector>
#include <cassert>

vector<int> sum_product(vector<int> numbers);

bool issame(vector<int> a, vector<int> b);

int main() {
    assert (issame(sum_product({10}), {10, 10}));
    // ... more code ...
}

vector<int> sum_product(vector<int> numbers){
    int sum = 0;
    int product = 1;
    
    for(int i = 0; i < numbers.size(); i++){
        sum += numbers[i];
        product *= numbers[i];
    }
    
    return {sum, product};
}

bool issame(vector<int> a, vector<int> b){
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