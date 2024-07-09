#include <vector>
#include <set>

bool isSameSet(std::vector<int> a, std::vector<int> b) {
    std::set<int> setA(a.begin(), a.end());
    std::set<int> setB(b.begin(), b.end());
    return setA == setB;
}

int main() {
    std::allocator<int> alloc;
    std::vector<int> l1(alloc);
    l1.assign({1, 2, 3});

    std::allocator<int> alloc2;
    std::vector<int> v2(alloc2);
    v2.assign({4, 5, 6, 7});

    bool result = isSameSet(l1, v2);
    if(result) {
        std::cout << "The sets are same." << std::endl;
    } else {
        std::cout << "The sets are not same." << std::endl;
    }
    return 0;
}