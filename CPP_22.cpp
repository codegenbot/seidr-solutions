#include <iostream>
#include <vector>
#include <list>
#include <optional>

// Add these includes:
#include <boost/any.hpp>

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if(boost::any_cast<std::optional<int>>(value).has_value()){
            result.push_back(*boost::any_cast<std::optional<int>>(value));
        }
    }
    return result;