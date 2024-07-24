#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}

// Declare get_odd_collatz function here

int main(){
    assert(issame(get_odd_collatz(1), {1}));
    return 0;
}