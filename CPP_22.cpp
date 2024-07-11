#include <vector>
#include <list>
#include <any>

std::vector<int> filter_integers(std::list<any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value, false)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(filter_integers({3, 3, 3}), {3, 3, 3}));
    return 0;
}