#include <boost/any.hpp>
#include <vector>
#include <list>
#include <typeindex>

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

int main() {
    std::vector<boost::any> values = {3, 3, 3};
    std::vector<int> result = filter_integers(values);
    for (const auto& value : result) {
        if (issame({value}, {3})) {
            std::cout << "True" << std::endl;
        } else {
            std::cout << "False" << std::endl;
        }
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