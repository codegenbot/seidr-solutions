#include <vector>
#include <cassert>

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> f(int n);

int main() {
    // Example usage (not part of the code solution)
    vector<int> result = f(5);
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}

vector<int> f(int n){
    vector<int> result;
    int sum = 0;
    int factorial = 1;
    
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) {
            factorial *= i;
            result.push_back(factorial);
        } else {
            sum += i;
            result.push_back(sum);
        }
    }
    
    return result;
}