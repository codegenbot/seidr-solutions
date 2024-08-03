#include <vector>
#include <cassert>

namespace std {
    std::vector<int> generate_integers(int start, int end); // Function declaration
}

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}