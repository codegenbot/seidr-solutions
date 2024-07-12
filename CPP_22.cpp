```
#include <boost/any.hpp>
#include <vector>
#include <list>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    std::list<boost::any> values = {3, 'c', 3, 3, 'a', 'b'};
    for (auto& value : values) {
        boost::any_cast<int>(value);
    }
    std::vector<int> filtered = filter_integers(values);

    if (issame({1}, filtered)) {
        for (int i : filtered) {
            std::cout << i << " ";
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