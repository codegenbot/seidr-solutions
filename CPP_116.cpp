#include <vector>
#include <algorithm>

vector<int> sort_array(vector<int>& arr) {
    sort(arr.begin(), arr.end(), [](int a, int b) {
        return make_pair(__builtin_popcount(a), a) < make_pair(__builtin_popcount(b), b);
    });
    return arr;
}

bool issame(const vector<int>& a, const vector<int>& b){
    return a == b;
}

int main() {
    assert(issame(sort_array({2, 4, 8, 16, 32}), {2, 4, 8, 16, 32}));
    
    return 0;
}