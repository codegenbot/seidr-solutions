#include <vector>
#include <any>
#include <boost/any.hpp>

bool issame(std::vector<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).good()) {
            result.push_back(boost::any_cast<int>(value).get());
        }
    }
    return issame(result);
}

bool issame(std::vector<int> a) {
    return (a.size() == 3) && (std::find(a.begin(), a.end(), 3) != a.end());
}

int main() {
    assert(issame({filter_integers({3, 'c', 3, 3, 'a', 'b'})}));
    return 0;
}