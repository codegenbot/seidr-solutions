#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

bool even_odd_palindrome(std::vector<int> arr) {
    std::vector<int> even, odd;
    
    for (int num : arr) {
        if (num % 2 == 0) {
            even.push_back(num);
        } else {
            odd.push_back(num);
        }
    }
    
    std::vector<int> odd_reversed(odd.rbegin(), odd.rend());
    
    return issame(even, odd_reversed);
}