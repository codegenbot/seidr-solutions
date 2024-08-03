#include <vector>
#include <cassert>

std::vector<int> generate_integers(int start, int end); // Function declaration

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return std::vector<int>(a) == b;
}