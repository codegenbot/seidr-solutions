#include <vector>
#include <cassert>

std::vector<int> even_odd_count(int n) {
    int evens = n/2;
    int odds = n - evens;
    return {evens, odds};
}

bool issame(std::vector<int> a, std::vector<int> b) {
    if(a.size() != b.size()) return false;
    
    for(int i=0; i<a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    
    return true;
}

int main() {
    assert(issame(even_odd_count(0), {1, 0}));
}