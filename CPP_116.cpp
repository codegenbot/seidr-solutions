#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool issame(vector<int> a,vector<int>b){
    return a == b;
}

vector<int> sort_vector(vector<int> arr) {
    vector<int> result = arr;
    sort(result.begin(), result.end(),
        [](int a, int b) {
            int ones_a = __builtin_popcount(a);
            int ones_b = __builtin_popcount(b);
            if (ones_a == ones_b) return a < b;
            return ones_a < ones_b;
        }
    );
    return result;
}

int main() {
    assert(issame(vector<int>(sort_vector({2,4,8,16,32})).begin(), vector<int>(sort_vector({2,4,8,16,32}))).end());
    return 0;
}