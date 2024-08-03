#include <vector>
#include <iostream>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); i++) {
        if(std::abs(a[i] - b[i]) > 1e-5)
            return false;
    }
    return true;
}

int main() {
    std::vector<float> l;
    float x;
    while(std::cin >> x) {
        l.push_back(x);
    }
    std::vector<float> result = get_positive(l);
    if(issame(result, l))
        std::cout << "The vector is same." << std::endl;
    else
        std::cout << "The vectors are different." << std::endl;
}

vector<float> get_positive(vector<float> l){
    vector<float> result;
    for(auto x : l) {
        if(x > 0.0f)
            result.push_back(x);
    }
    return result;
}