#include <iostream>
#include <vector>
#include <list>
#include <boost/any.hpp>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).good()) {
            int integer = boost::any_cast<int>(value);
            bool isSame = true;
            for (int i : result) {
                if (!issame(std::vector<int>({i}), std::vector<int>({integer}))) {
                    isSame = false;
                    break;
                }
            }
            if (isSame) continue;
            result.push_back(integer);
        }
    }
    return result;
}

int main() {
    std::list<boost::any> values = {{1}, {2}, {3}, {4, 5}};
    std::vector<int> integers = filter_integers(values);
    for (int integer : integers) {
        std::cout << integer << " ";
    }
    return 0;
}