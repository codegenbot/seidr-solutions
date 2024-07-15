#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}

int main(){
    assert (issame(std::vector<int>{10}, std::vector<int>{10, 10}));
    return 0;
}