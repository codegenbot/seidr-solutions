#include <vector>
#include <algorithm>

int main() {
    std::vector<float> l;
    // read input from user
    float num;
    while(std::cin >> num) {
        l.push_back(num);
    }
    
    auto it = std::max_element(l.begin(), l.end());
    return *it;