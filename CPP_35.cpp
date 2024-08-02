#include <vector>
#include <algorithm>

int main() {
    std::vector<int> l;
    int n; // Read input from user
    while (n != -1) {
        cin >> n;
        l.push_back(n);
    }
    std::vector<float> v = l; 
    return *std::max_element(v.begin(), v.end());