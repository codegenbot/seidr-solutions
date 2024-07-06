#include <iostream>
#include <vector>
#include <list>
#include <boost/any.hpp>

bool issame(const std::vector<int>& v1, const std::vector<int>& v2) {
    if (v1.size() != v2.size()) return false;
    for (int i = 0; i < v1.size(); ++i) {
        if (v1[i] != v2[i]) return false;
    }
    return true;
}

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        try {
            int integer = boost::any_cast<int>(value);
            if (integer > 0) {
                result.push_back(integer);
            }
        } catch (...) {
            // Handle the exception
        }
    }
    return result;
}

int main() {
    std::list<boost::any> values = {{1}, {2}, {-3}, {4}};
    std::vector<int> output = filter_integers(values);
    if (issame(std::vector<int>({1, 2, 4}), output)) {
        std::cout << "Success!";
    } else {
        std::cout << "Failure!";
    }
    return 0;
}