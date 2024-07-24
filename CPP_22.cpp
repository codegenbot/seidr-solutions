```
#include <iostream>
#include <vector>
#include <boost/config.hpp>
#include <boost/variant.hpp>

std::vector<int> filter_integers(std::vector<boost::variant<int>> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (boost::holds_alternative<int>(value)) {
            result.push_back(boost::get<int>(value));
        }
    }
    return result;

}

bool is_same(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    std::vector<boost::variant<int>> values = {{1}, {2}, {'a'}, {3}};
    std::vector<int> integers = filter_integers(values);
    if (is_same({1, 2, 3}, integers)) {
        std::cout << "The vectors are the same." << std::endl;
    } else {
        std::cout << "The vectors are different." << std::endl;
    }
}