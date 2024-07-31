#include <vector>

vector<int> sum_product(vector<int> numbers){
    int sum = 0;
    int product = 1;
    
    for(int num : numbers){
        sum += num;
        product *= num;
    }
    
    return {sum, product};
}

vector<int> issame(vector<int> a, vector<int> b){
    vector<int> result;
    
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] == b[i]) {
            result.push_back(1);
        } else {
            result.push_back(0);
        }
    }
    
    return result;
}

int main() {
    assert(issame(sum_product({10}), {10, 10}) == vector<int>{1, 1});
    
    return 0;
}