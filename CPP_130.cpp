#include <vector>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main() {
    assert (issame(tri_n(1) , {1, 3}));
    return 0;
}