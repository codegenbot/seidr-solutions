#include <vector>
#include <set>

bool isSame(std::vector<int> a, std::vector<int> b) {
    std::set<int> setA(a.begin(), a.end());
    std::set<int> setB(b.begin(), b.end());
    return setA == setB;
}

int main() {
    std::vector<int> l1({1, 2, 3});
    std::vector<int> v2({4, 5, 6, 7});

    bool result = isSame(l1, v2);
    if(result) {
        std::cout << "The sets are same." << std::endl;
    } else {
        std::cout << "The sets are not same." << std::endl;
    }
    return 0;
}