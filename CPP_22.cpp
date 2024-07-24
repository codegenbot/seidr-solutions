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
    int num1, num2;
    std::cout << "Enter the size of two vectors: ";
    std::cin >> num1 >> num2;

    std::vector<boost::variant<int>> vec1(num1);
    for (auto & i : vec1) {
        std::cin >> boost::get<int>(i);
    }

    std::vector<boost::variant<int>> vec2(num2);
    for (auto & i : vec2) {
        std::cin >> boost::get<int>(i);
    }

    std::vector<int> filtered1 = filter_integers(vec1);
    std::vector<int> filtered2 = filter_integers(vec2);

    if (is_same(filtered1, filtered2)) {
        std::cout << "The two vectors are the same." << std::endl;
    } else {
        std::cout << "The two vectors are different." << std::endl;
    }
}