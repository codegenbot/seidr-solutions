#include <vector>
#include <iostream>

bool issame(vector<float> a, vector<float> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(std::abs(a[i] - b[i]) > 1e-5) return false;
    }
    return true;
}

vector<float> get_positive(vector<float> l) {
    vector<float> result;
    for (float x : l) {
        if (x > 0) {
            result.push_back(x);
        }
    }
    return result;
}

int main() {
    vector<float> input;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    for(int i = 0; i < n; i++) {
        float x;
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> x;
        input.push_back(x);
    }
    
    vector<float> positive = get_positive(input);
    if(positive.size() > 0) {
        std::cout << "Positive numbers: ";
        for(float x : positive) {
            std::cout << x << " ";
        }
        std::cout << std::endl;
        
        vector<float> same = get_positive(positive);
        if(same.size() == positive.size()) {
            std::cout << "The set of positive numbers is the same: " << (issame(input, positive) ? "true" : "false") << std::endl;
        } else {
            std::cout << "The set of positive numbers is not the same: " << (issame(same, positive) ? "true" : "false") << std::endl;
        }
    } else {
        std::cout << "No positive numbers found." << std::endl;
    }
    
    return 0;
}