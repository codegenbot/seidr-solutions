#include <vector> 

vector<int> f(int n) {
    vector<int> result(n);
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            int factorial = 1;
            for (int j = 1; j <= i; j++) {
                factorial *= j;
            }
            result[i] = factorial;
        }
        else {
            int sum = 0;
            for (int j = 1; j <= i; j++) {
                sum += j;
            }
            result[i] = sum;
        }
    }
    return result;
}

vector<int> issame(vector<int> a, vector<int> b) {
    // Add your implementation here
    // ...
}

int main() {
    // Add test cases and assertions here
    assert(issame(f(3), {1, 2, 6}));
    // ...
    
    return 0;
}