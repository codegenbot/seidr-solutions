#include <vector>
#include <cassert>

bool issame(const std::vector<int>& l1, const std::vector<int>& l2) {
    return l1 == l2;
}

std::vector<int> incr_list(std::vector<int> l) {
    for (int i = 0; i < l.size(); i++) {
        l[i]++;
    }
    return l;
}

int main() {
    std::vector<int> testList = {1, 2, 3};
    std::vector<int> expectedList = {2, 3, 4};
    
    std::vector<int> resultList = incr_list(testList);
    
    assert(issame(resultList, expectedList));
    
    return 0;
}