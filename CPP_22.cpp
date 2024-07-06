#include <vector>
#include <list>
#include <any>
#include <algorithm>

bool issame(std::vector<int> vec) {
    return std::all_of(vec.begin(), vec.end(), [](int x){ return x == 3; });
}

std::vector<int> filter_integers(std::list<std::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (value.type() == typeid(int) && boost::any_cast<int>(value).good()) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}