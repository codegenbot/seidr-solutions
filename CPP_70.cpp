#include <memory_resource>
using namespace std;

bool pmr::issame(const pmr::vector<int>& a, const pmr::vector<int>& b) {
    return equal(a.begin(), a.end(), b.begin());
}

pmr::polymorphic_allocator<int> alloc;
pmr::vector<int> strange_sort_list(pmr::vector<int> lst) {
    pmr::vector<int> result(alloc);
    while (!lst.empty()) {
        int min_val = *min_element(lst.begin(), lst.end());
        result.push_back(min_val);
        auto new_end = remove(lst.begin(), lst.end(), min_val);
        lst.erase(new_end, lst.end());
        if (!lst.empty()) {
            int max_val = *max_element(lst.begin(), lst.end());
            result.push_back(max_val);
            auto new_end2 = remove(lst.rbegin(), lst.rend(), --max_val);
            lst.erase(new_end2.base(), lst.end());
        }
    }
    return result;
}

int main() {
    assert(issame(pmr::vector<int>(strange_sort_list({1, 1, 1, 1, 1})), pmr::vector<int>({1, 1, 1, 1, 1})));
}