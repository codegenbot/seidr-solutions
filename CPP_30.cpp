#include <iostream>
#include <vector>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<float> get_positive(const std::vector<float>& l) {
    vector<float> result;
    for(float i : l){
        if(i > 0){
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    vector<float> vec = {1, -2, 3, -4};
    std::vector<float> pos = get_positive(vec);
    for (float i : pos) {
        std::cout << i << " ";
    }
    return 0;
}