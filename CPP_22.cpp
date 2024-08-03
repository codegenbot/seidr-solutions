```c++
#include <vector>
#include <list>
#include <any>
#include <boost/any.hpp>

bool operator== (const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> filter_integers(std::list<std::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<bool>(value)) {
            int num = boost::any_cast<int>(value);
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    assert(filter_integers({3, std::any('c'), 3, 3, std::any('a'), std::any('b')}) == {3, 3, 3});
    return 0;
}