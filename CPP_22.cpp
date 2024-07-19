#include <any>
#include <list>
#include <vector>
#include <cassert>

std::vector<int> filter_integers(std::list<std::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (value.type() == typeid(int)) { 
            result.push_back(std::any_cast<int>(value));
        }
    }
    return result.empty() ? std::vector<int>() : result;
}

bool same_vector(const std::vector<int>& a, const std::vector<int>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert(same_vector(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {1, 2, 3}));
    return 0;
}