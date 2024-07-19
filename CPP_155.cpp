#include <vector>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main(){
    assert(even_odd_count(0) == std::vector<int>{1, 0});
}