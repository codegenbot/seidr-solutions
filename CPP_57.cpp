#include <vector>

bool monotonic(const std::vector<int>& l) {
    bool increasing = true;
    bool decreasing = true;
    
    std::size_t i; // Declaring 'i' outside the loop for compatibility
    for (i = 1; i < l.size(); ++i) { // Added std:: namespace to size_t
        if (l[i] < l[i-1]) {
            increasing = false;
        }
        if (l[i] > l[i-1]) {
            decreasing = false;
        }
    }
    
    return increasing || decreasing;
}