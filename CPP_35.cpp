````
#include <vector>
#include <algorithm>

int main() {
    std::vector<float> v;
    // Read input from user
    for (float i; std::cin >> i;) {
        v.push_back(i);
    }
    return *std::max_element(v.begin(),v.end());
}