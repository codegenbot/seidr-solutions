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

    while(true) {
        std::cout << "Enter a number (0 to finish): ";
        std::cin >> num;
        
        if(num == 0.0f) {
            break;
        }
        
        l.push_back(num);
    }

    if(l.size() > 1) {
        if(issame(get_positive(l), get_positive(std::vector<float>(l.rbegin(), l.rend())))) {
            std::cout << "The two vectors are the same.\n";
        } else {
            std::cout << "The two vectors are not the same.\n";
        }
    } else if(l.size() == 1) {
        std::cout << "You entered one number: ";
        
        for(auto x : get_positive(l)) {
            std::cout << x << " ";
        }
        
        std::cout << "\n";
    } else {
        std::cout << "You didn't enter any numbers.\n";
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