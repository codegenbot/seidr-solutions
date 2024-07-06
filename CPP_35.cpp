```#include <vector>
#include <algorithm>

int main() {
    std::vector<float> l;
    // Read input from user
    for (float num; std::cin >> num;) {
        l.push_back(num);
    }
    return *std::max_element(l.begin(),l.end());
}