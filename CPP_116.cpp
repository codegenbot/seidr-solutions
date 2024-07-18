#include <vector>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main(){
    assert(issame(std::sort({2,4,8,16,32}), {2, 4, 8, 16, 32}));
}