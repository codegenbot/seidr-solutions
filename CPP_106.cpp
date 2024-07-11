#include <vector>

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

int main(){
    vector<int> result = f(5);
    vector<int> expected = {0, 1, 2, 6, 3}; // Example expected result
    if(issame(result, expected)){
        // Output/result matches the expected values
    } else {
        // Output/result does not match the expected values
    }
    return 0;
}