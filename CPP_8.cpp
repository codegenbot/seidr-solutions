#include <vector>

vector<int> sum_product(vector<int> numbers){
    int sum = 0;
    int product = 1;

    for (int i = 0; i < numbers.size(); i++) {
        sum += numbers[i];
        product *= numbers[i];
    }

    return {sum, product};
}

int issame(vector<int> a, vector<int> b){
    if (a.size() != b.size()) {
        return 0;
    }
    
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return 0;
        }
    }
    
    return 1;
}

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};
    vector<int> result = sum_product(numbers);
    
    vector<int> a = {1, 2, 3};
    vector<int> b = {1, 2, 3};
    
    int is_same = issame(a, b);
    
    return 0;
}