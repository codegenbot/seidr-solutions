#include <vector>
#include <iostream>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    if(a.size() != b.size())
        return false;
    for(size_t i = 0; i < a.size(); ++i)
        if(std::abs(a[i] - b[i]) > 1e-9f)
            return false;
    return true;
}

int main() {
    std::vector<float> l;
    float x;
    while(std::cin >> x) {
        l.push_back(x);
    }
    std::vector<float> pos = get_positive(l);
    bool same = issame(l, pos);
    if(same)
        std::cout << "The vectors are the same.\n";
    else
        std::cout << "The vectors are different.\n";
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