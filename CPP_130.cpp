#include <vector>
#include <cassert>

bool issame(const std::vector<int> &a, const std::vector<int> &b){
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size(); ++i){
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> yourFunctionName(int n){
    std::vector<int> tri(n, 0); // Define tri array with size n initialized to 0
    return tri;
}

int main() {
    int n = 2; // Set appropriate value for n
    std::vector<int> tri = yourFunctionName(n); // Call your function with appropriate parameter
    assert(issame(tri, {0, 0})); // Check if the result is as expected
    return 0;
}