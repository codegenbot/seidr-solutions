#include <algorithm>
#include <cassert>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    std::vector<int> sorted_a = a;
    std::vector<int> sorted_b = b;
    std::sort(sorted_a.begin(), sorted_a.end());
    std::sort(sorted_b.begin(), sorted_b.end());
    return sorted_a == sorted_b;
}

int main(){
    std::vector<int> l = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    std::sort(l.begin(), l.end());
    l.erase(std::unique(l.begin(), l.end()), l.end());
    assert(issame(l, std::vector<int>{0, 2, 3, 5, 9, 123}));
    return 0;
}