#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<float> sort_even(const vector<float>& l) {
    vector<float> l_prime = l;
    vector<float> even_values;
    
    for(int i = 0; i < l.size(); i += 2) {
        even_values.push_back(l[i]);
    }
    
    sort(even_values.begin(), even_values.end());
    
    for(int i = 0; i < l.size(); i += 2) {
        l_prime[i] = even_values[i / 2];
    }
    
    return l_prime;
}

int main() {
    assert(issame(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));
    return 0;
}