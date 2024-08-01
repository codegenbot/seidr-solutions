#include <vector>
#include <cassert>

bool issame(std::vector<int>& a, std::vector<int>& b){
    return a == b;
}

int main() {
    std::vector<int> incr_list {1, 2, 3};
    assert(issame(incr_list, incr_list));   
}