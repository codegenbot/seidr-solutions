#include <vector>
#include <list>
#include <boost/any.hpp>

std::vector<int> filter_integers(const std::list<boost::any>& values) {
    std::vector<int> integers;

    for (const auto& value : values) {
        if (auto integer = boost::any_cast<int>(&value)) {
            integers.push_back(*integer);
        }
    }

    return integers;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(filter_integers(std::list<boost::any>{3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    return 0;
}