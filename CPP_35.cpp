#include <vector>
#include <algorithm>

float max_element(const vector<float>& l){
    return *std::max_element(l.begin(), l.end());
}

int main() {
    std::vector<float> vec(5);
    for (int i = 0; i < vec.size(); i++) {
        std::cin >> vec[i];
    }
    
    std::cout << "Max element in the vector: " << max_element(vec) << std::endl;
    
    return 0;
}