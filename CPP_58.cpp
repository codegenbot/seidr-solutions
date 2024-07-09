#include <vector>
#include <set>

bool isSameSet(std::pmr::vector<int> a, std::pmr::vector<int> b) {
    std::set<int> setA(a.begin(), a.end());
    std::set<int> setB(b.begin(), b.end());
    return setA == setB;
}

int main() {
    std::pmr::vector<int> l1 = {1,2,3};
    std::pmr::vector<int> v2 = {4,5,6};
    bool result = isSameSet(l1, v2);
    if(result) {
        std::cout << "The sets are same." << std::endl;
    } else {
        std::cout << "The sets are not same." << std::endl;
    }
    return 0;
}