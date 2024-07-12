#include <vector>
#include <cassert>

// Fix the vector declaration in the issame() function to use std::vector<int>
bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> f(int n){
    std::vector<int> result(n);
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            int fact = 1;
            for (int j = 1; j <= i; ++j) {
                fact *= j;
            }
            result[i] = fact;
        } else {
            int sum = 0;
            for (int j = 1; j <= i; ++j) {
                sum += j;
            }
            result[i] = sum;
        }
    }
    return result;
}

// Rename the existing main() function to solve() and call it from the new main() function
void solve(){
    assert(issame(f(3), std::vector<int>{1, 2, 6}));
}

int main(){
    solve();
    return 0;
}