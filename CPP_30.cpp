#include <vector>
#include <iostream>

bool issame(const vector<float>& a, const vector<float>& b) {
    if(a.size() != b.size()) 
        return false;
    
    for(int i = 0; i < a.size(); i++) {
        if(std::abs(a[i] - b[i]) > 1e-5f)
            return false;
    }
    
    return true;
}

int main() {
    vector<float> l;
    float x;
    while(std::cin >> x) 
        l.push_back(x);
        
    vector<float> result = get_positive(l);

    if(result.empty()) {
        std::cout << "No positive numbers found." << std::endl;
    } else {
        for(auto x : result) 
            std::cout << x << " ";
        std::cout << std::endl;

        vector<float> l2;
        while(std::cin >> x) 
            l2.push_back(x);
            
        if(issame(result, get_positive(l2))) 
            std::cout << "The two lists contain the same positive numbers." << std::endl;
        else
            std::cout << "The two lists do not contain the same positive numbers." << std::endl;
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