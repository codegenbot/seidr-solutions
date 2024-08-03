#include <vector>
#include <cassert>
#include <algorithm>

bool issame(vector<float> a, vector<float> b){
    if (a.size() != b.size()) {
        return false;
    }
    
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    return a == b;
}

vector<float> find_closest_elements(vector<float> numbers) {
    // Implement find_closest_elements
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1});
}