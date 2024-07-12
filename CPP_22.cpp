```
#include <boost/any.hpp>
#include <vector>
#include <list>
#include <typeindex>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    std::list<boost::any> values({3, 3, 3});
    std::vector<int> result = filter_integers(values);
    if (issame({1, 2}, result)) {
        for (const auto& value : result) {
            std::cout << value << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "Vectors are not equal." << std::endl;
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