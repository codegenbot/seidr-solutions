#include <initializer_list>
#include <vector>
#include <list>
#include <any>
#include <algorithm>
#include <cassert>
#include <type_traits>

std::vector<int> filter_integers(std::list<std::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (std::is_same_v<std::remove_pointer_t<std::decay_t<decltype(value)>>, int>) { 
            result.push_back(std::any_cast<int>(value));
        }
    }
    return result;
}

bool equals(const std::vector<int>& a, const std::vector<int>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert(equals(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
}