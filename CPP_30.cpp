#include <vector>
#include <memory>

bool issame(vector<float> a, vector<float> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    vector<float> l;
    vector<float> result = get_positive(l);
    
    // ... your logic here ...
}