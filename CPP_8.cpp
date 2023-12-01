#include <vector>   // 1. Add the missing header <vector>

using namespace std;

vector<int> sum_product(vector<int> numbers);

bool issame(vector<int> a, vector<int> b);   // 2. Change the function signature of issame

#include <cassert>   // 4. Add a missing include statement for assert

bool issame(vector<int> a, vector<int> b) {   // 3. Add a missing closing bracket }
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

vector<int> sum_product(vector<int> numbers) {
    int sum = 0;
    int product = 1;
    
    for(int i = 0; i < numbers.size(); i++){
        sum += numbers[i];
        product *= numbers[i];
    }
    
    return {sum, product};
}