#include <boost/container.hpp>
#include <list>
#include <any>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::boost::container::vector<int> filter_integers(std::list<std::any> values) {
    std::boost::container::vector<int> result;
    for (const auto& value : values) {
        if (value.type() == typeid(int)) {
            int x = boost::any_cast<int>(value);
            result.push_back(x);
        }
    }
    return result;
}

int main() {
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3})); 
}