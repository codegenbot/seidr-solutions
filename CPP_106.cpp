#include <vector>

bool issame(vector<int> a, vector<int> b);

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
    return a == b;
}

int main(){
    vector<int> test1 = f(5);
    vector<int> test2 = f(5);

    if (issame(test1, test2)){
        // Output the result if the two vectors are the same
    } else{
        // Output the result if the two vectors are different
    }

    return 0;
}