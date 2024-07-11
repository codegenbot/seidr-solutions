```cpp
#include <memory_resource>
#include <algorithm>

bool same_vectors(const std::pmr::vector<int>& a, const std::pmr::vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

std::pmr::polymorphic_allocator<int> alloc;

int main() {
    alloc = std::pmr::polymorphic_allocator<int>();
    std::pmr::vector<int> lst;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        int val;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> val;
        lst.push_back(val);
    }
    std::pmr::vector<int> result = strange_sort_list(lst);
    for (int x : result) {
        std::cout << x << " ";
    }
    std::cout << "\n";
    assert(same_vectors({1, 1, 1, 1, 1}, result));
}

std::pmr::vector<int> strange_sort_list(std::pmr::vector<int> lst) {
    std::pmr::vector<int> result(alloc);
    while (!lst.empty()) {
        int min_val = *std::min_element(lst.begin(), lst.end());
        result.push_back(min_val);
        auto new_end = std::remove(lst.begin(), lst.end(), min_val);
        lst.erase(new_end, lst.end());
        if (!lst.empty()) {
            int max_val = *std::max_element(lst.begin(), lst.end());
            result.push_back(max_val);
            auto new_end2 = std::remove(lst.rbegin(), lst.rend(), --max_val);
            lst.erase(new_end2.base(), lst.end());
        }
    }
    return result;
}