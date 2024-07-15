#include <vector>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

// In the main function or any other appropriate place
assert(issame(tri(1), {1, 3}));