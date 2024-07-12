#include <boost/any.hpp>
#include <vector>
#include <list>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    std::list<boost::any> values = {3, 3, 3};
    auto result = filter_integers(values);
    bool same = issame({1, 2, 3}, result);
    if (same) {
        for (const auto& value : result) {
            std::cout << value << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "Not the same" << std::endl;
    }
    return 0;
}

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}