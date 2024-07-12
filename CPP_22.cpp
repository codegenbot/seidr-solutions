#include <iostream>
#include <vector>
#include <list>
#include <boost/any.hpp>
#include <boost/config.hpp>

bool is_same(std::vector<int> a, std::vector<int> b) {
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        try {
            int val = boost::any_cast<int>(value);
            result.push_back(val);
        } catch (...) {
            // ignore non-integer values
        }
    }
    return result;
}

int main() {
    std::list<boost::any> values = {3, boost::any('c'), 3, 3, boost::any('a'), boost::any('b')};
    std::vector<int> expected = {3, 3, 3};
    if (!is_same(filter_integers(values), expected)) {
        for (const auto& value : filter_integers(values)) {
            std::cout << value << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}