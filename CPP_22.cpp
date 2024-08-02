#include <vector>
#include <list>
#include <any>

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        int integer = boost::any_cast<int>(value);
        if (!integer.empty()) { 
            result.push_back(integer);
        }
    }
    return result;
}

int main() {
    assert(filter_integers({3, 3, 'c', 3, 'a', 'b'}) == (std::vector<int>{3, 3, 3}));
    return 0;
}