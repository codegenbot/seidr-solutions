#include <vector>
#include <list>
#include <any>

std::vector<int> filter_integers(std::list<std::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if(std::any_cast<boost::optional<int>>(value).has_value()){
            result.push_back(*std::any_cast<boost::optional<int>>(value));
        }
    }
    return result;
}