#include <vector>
#include <list>
#include <any>

bool issame(const std::any& a, const std::any& b) {
    return a.type() == b.type();
}

std::vector<int> filter_integers(std::list<std::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (issame(value, boost::any()) && boost::any_cast<int>(value).good()) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}