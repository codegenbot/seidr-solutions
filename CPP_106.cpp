#include <vector>

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i = 0; i < a.size(); ++i){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

vector<int> f(int n){
    vector<int> result(n);
    for(int i = 0; i < n; ++i){
        if(i % 2 == 0){
            int factorial = 1;
            for(int j = 1; j <= i; ++j){
                factorial *= j;
            }
            result[i] = factorial;
        } else {
            int sum = 0;
            for(int j = 1; j <= i; ++j){
                sum += j;
            }
            result[i] = sum;
        }
    }
    return result;
}

int main(){
    vector<int> output = f(5);
    vector<int> expected = {1, 1, 2, 6, 3}; // Expected output for f(5)
    
    if(issame(output, expected)){
        // Output matches expected
        return 0;
    } else {
        // Output does not match expected
        return 1;
    }
}