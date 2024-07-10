#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a.size() == b.size();
}

int main(){
    assert(issame(std::vector<int>{4, 3, 2, 8}, std::vector<int>{}) == true);
    return 0;
}