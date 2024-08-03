```cpp
#include <vector>
#include <iostream>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    if(a.size() != b.size()) 
        return false;
    for(int i = 0; i < a.size(); i++) {
        if(std::abs(a[i] - b[i]) > 1e-9f)
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
    vector<float> result = get_positive(l);

    if(result.empty()) {
        std::cout << "No positive numbers" << std::endl;
    } else {
        for(auto x : result) {
            std::cout << x << " ";
        }
        std::cout << std::endl;

        std::vector<float> another = {1.0f, 2.0f};
        if(issame(result, another)) {
            std::cout << "same" << std::endl;
        } else {
            std::cout << "not same" << std::endl;
        }
    }

    return 0;
}

vector<float> get_positive(vector<float> l){
    vector<float> result;
    for(auto x : l) {
        if(x > 0.0f)
            result.push_back(x);
    }
    return result;
}