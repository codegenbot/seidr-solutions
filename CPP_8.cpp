#include <vector>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> sum_product_and_product(vector<int> numbers){
    int sum = 0;
    int product = 1;
    
    for(int num : numbers){
        sum += num;
        product *= num;
    }
    
    return {sum, product, product};
}

int main(){
    assert(issame(sum_product_and_product({10}), {10, 10, 10}));
    
    return 0;
}