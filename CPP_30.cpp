#include <vector>
#include <iostream>

bool issame(const vector<float>& a, const vector<float>& b) {
    if(a.size() != b.size())
        return false;
    
    for(int i = 0; i < a.size(); i++) {
        if(std::abs(a[i] - b[i]) > 1e-6f)
            return false;
    }
    return true;
}

int main() {
    vector<float> l;
    float x;
    std::cout << "Enter numbers (enter 'q' to finish): ";
    
    while(true) {
        std::cin >> x;
        if(x == 'q')
            break;
        l.push_back(x);
    }
    
    vector<float> result = get_positive(l);
    
    if(result.size() > 0) {
        for(auto x : result)
            std::cout << x << " ";
        std::cout << "\n";
    } else
        std::cout << "All numbers are negative.\n";
        
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