#include <vector>

bool issame(const vector<float>& a, const vector<float>& b); 

bool issame(const vector<float>& a, const vector<float>& b) { 
    return a == b;
}

int main() {
    assert(issame(get_positive({}), {}));
}