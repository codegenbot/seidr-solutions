#include <vector>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main() {
    assert(issame(std::vector<int>{4, 3, 2, 8}, std::vector<int>{}));
   
    return 0;
}