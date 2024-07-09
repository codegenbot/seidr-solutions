```cpp
#include <boost/any.hpp>
#include <vector>
#include <list>

using namespace boost;

bool issame(vector<int> a, vector<int> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

bool issame(list<any> a, list<any> b) {
    return std::all_of(a.begin(), a.end(), [&](const any& x) {
        return std::any_cast<any>(x).type() == std::any_cast<any>(b).type();
    });
}

std::vector<int> filter_integers(std::list<any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (value.type() == typeid(int) && any_cast<int>(value).good()) {
            result.push_back(any_cast<int>(value));
        }
    }
    return result;
}