#include <cassert> // Add this line to include the <cassert> header

// Your existing code here...

int main() {
    using ArrayUtils::issame;
    using ArrayUtils::sort_array;
    assert(issame(sort_array(std::vector<int>({21, 14, 23, 11})), std::vector<int>({23, 21, 14, 11}));
    
    return 0;
}