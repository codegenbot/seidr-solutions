#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    
    return true;
}

int even_odd_count(std::vector<int> arr, int& even_count, int& odd_count);

int main() {
    // Function call or other code logic using even_odd_count
    return 0;
}