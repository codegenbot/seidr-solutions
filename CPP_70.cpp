#include <algorithm>
#include <vector>
#include <limits>

bool issame(std::vector<int> a,std::vector<int> b){
    return a == b;
}

int strange_sort_list() {
    // Your current function implementation here...
}

int main() {
    assert(issame(strange_sort_vector({1,2}), {1}));
    return 0;
}