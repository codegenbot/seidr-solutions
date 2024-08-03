#include <vector>
#include <iostream>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(int i = 0; i < a.size(); i++) {
        if(std::abs(a[i] - b[i]) > 1e-5f) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<float> l;
    float num;
    while(std::cin >> num) {
        l.push_back(num);
    }
    if(l.size() < 2) {
        std::cout << "Not enough elements to compare.\n";
    } else {
        bool same = issame(get_positive(l), get_positive({l[0], l[1]}));
        if(same) {
            std::cout << "The first two positive numbers are the same.\n";
        } else {
            std::cout << "The first two positive numbers are different.\n";
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