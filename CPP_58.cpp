#include <vector>
#include <set>
#include <initializer_list>
#include <memory>

bool isSameSet(std::pmr::vector<int> a, std::pmr::vector<int> b) {
    auto res = std::pmr::get_default_resource();
    std::set<int> setA(a.begin(), a.end(), res);
    std::set<int> setB(b.begin(), b.end(), res);
    return setA == setB;
}

int main() {
    std::pmr::pool_options node;
    node.max_size = 1024; // adjust the size according to your needs

    std::pmr::memory_resource* global_res = new std::pmr::chip_allocator<char>();
    std::pmr::set_default_resource(global_res);

    std::pmr::vector<int> l1(std::pmr::get_default_resource(), 3); 
    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);

    std::pmr::vector<int> v2(std::pmr::get_default_resource(), 6); 
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