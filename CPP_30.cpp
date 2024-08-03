#include <vector>
#include <iostream>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (std::abs(a[i] - b[i]) > 1e-9f) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<float> l;
    float x;
    while(std::cin >> x) {
        l.push_back(x);
    }
    if (l.size() < 2) {
        std::cout << "At least two numbers are required." << std::endl;
    } else {
        std::vector<float> positive = get_positive(l);
        bool same = issame(positive, l);
        if (!same) {
            std::cout << "The set of positive numbers is different from the original set." << std::endl;
        } else {
            std::cout << "The set of positive numbers is the same as the original set." << std::endl;
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