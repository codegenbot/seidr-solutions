#include <vector>
#include <algorithm>

int main() {
    std::vector<int> l;
    // Read input from user and store in 'l'
    for(int i=0; i<3; i++) {
        int temp;
        std::cin >> temp;
        l.push_back(temp);
    }
    std::vector<float> v = l; 
    return *std::max_element(v.begin(), v.end()); 
}