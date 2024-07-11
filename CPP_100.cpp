#include <vector>
bool make_a_pile(std::vector<int>& a){
    std::sort(a.begin(), a.end());
}


bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> a_sorted = a;
    std::vector<int> b_sorted = b;
    make_a_pile(a_sorted);
    make_a_pile(b_sorted);
    
    return a_sorted == b_sorted;
}