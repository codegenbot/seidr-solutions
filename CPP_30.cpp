#include <iostream>
#include <vector>

bool issame(std::vector<float> a, std::vector<float> b) {
    return a.size() == b.size();
}

std::vector<float> get_positive(std::vector<float> l){
    std::vector<float> result;
    for(float i : l) {
        if(i > 0) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    assert(issame(get_positive({}), {})); 
    return 0;
}