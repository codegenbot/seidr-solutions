#include <iostream>
#include <vector>

std::vector<int> filter_integers(std::list<boost::any>& values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (boost::get<int>(value)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}