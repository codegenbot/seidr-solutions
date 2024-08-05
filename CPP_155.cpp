#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    
    return true;
}

int even_odd_count(const std::vector<int>& nums) {
    int even_count = 0;
    int odd_count = 0;
    
    for (int num : nums) {
        if (num % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }
    
    return even_count + odd_count;
}

int main() {
    // Your main function logic here
    return 0;
}