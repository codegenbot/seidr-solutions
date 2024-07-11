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

int main() {
    // Call f function appropriately
    vector<int> res = f(5);

    // Call issame function if needed
    return 0;
}