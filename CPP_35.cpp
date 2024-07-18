#include <vector>
#include <algorithm>

float max_element(const vector<float>& l){
    return *std::max_element(l.begin(), l.end());
}

int main() {
    std::vector<float> l(5); // Change the size as needed
    // Read input values from the user
    for(int i = 0; i < l.size(); i++){
        std::cin >> l[i];
    }
    
    // Find and output the maximum element
    std::cout << "Max element: " << max_element(l) << std::endl;
    
    return 0;
}