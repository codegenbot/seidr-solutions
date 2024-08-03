#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}

std::vector<int> pluck(const std::vector<int>& v) {
    return v; // Placeholder implementation for pluck function
}

int main(){
    assert(issame(pluck({7, 9, 7, 1}), std::vector<int>{}));

    return 0;
}