#include <vector>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> f(int n){
    vector<int> result(n);
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

void main(){
    assert(issame(f(3), vector<int>{1, 2, 6}));
}