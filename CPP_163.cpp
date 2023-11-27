#include <iostream>
#include <vector>
#include <cassert>

std::vector<int> generate_integers(int a, int b) {
    std::vector<int> result;
    for (int i = a; i <= b; i++) {
        if (i % 2 == 0) {
            result.push_back(i);
        }
    }
    return result;
}

bool are_same(std::vector<int> a, std::vector<int> b){
    if(a.size() != b.size()) {
        return false;
    }
    
    for(int i=0; i<a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    assert(are_same(generate_integers(1, 10), {2, 4, 6, 8, 10}));
    return 0;
}