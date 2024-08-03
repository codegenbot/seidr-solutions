#include <vector>
#include <algorithm>

int main() {
    std::vector<float> l;
    float x;
    
    cout << "Enter numbers (0 to stop): ";
    while ((cin >> x) && (x != 0)) {
        l.push_back(x);
    }
    
    if (!l.empty()) {
        return *std::max_element(l.begin(), l.end());
    } else {
        return 0;
    }
}