#include <vector>
#include <set>
#include <initializer_list>
#include <memory>

bool isSameSet(std::pmr::vector<int> a, std::pmr::vector<int> b) {
    std::set<int> setA(a.begin(), a.end());
    std::set<int> setB(b.begin(), b.end());
    return setA == setB;
}

int main() {
    std::pmr::polymorphic_allocator<int> alloc;
    std::pmr::vector<int> l1(alloc);
    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);

    std::pmr::polymorphic_allocator<int> alloc2;
    std::pmr::vector<int> v2(alloc2);
    v2.push_back(4);
    v2.push_back(5);
    v2.push_back(6);
    v2.push_back(7);

    bool result = isSameSet(l1, v2);
    if(result) {
        std::cout << "The sets are same." << std::endl;
    } else {
        std::cout << "The sets are not same." << std::endl;
    }
    return 0;