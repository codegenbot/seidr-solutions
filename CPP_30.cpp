#include <vector>
#include <algorithm>

// Function to compare two vectors
bool issame(std::vector<float> a, std::vector<float> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<float> get_positive(std::vector<float> l){
    std::vector<float> result;
    for(float x : l) {
        if(x > 0) {
            result.push_back(x);
        }
    }
    return result;
}

int main() {
    assert (issame(get_positive({}), {})); 
    return 0;
}