#include <vector>
#include <cassert>

bool issame(const std::vector<float>& a, const std::vector<float>& b){
    return a == b;
}

int main(){
    assert(issame(std::vector<float>{1}, std::vector<float>{}));
    
    return 0;
}