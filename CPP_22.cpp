#include <boost/any.hpp>
#include <iostream>
#include <vector>
#include <list>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

int main() {
    std::list<boost::any> values = {3, 3, 3};
    std::vector<int> filtered_values = filter_integers(values);
    
    if (issame({1, 2, 3}, filtered_values)) {
        std::cout << "The filtered values are the same as {1, 2, 3}" << std::endl;
    } else {
        std::cout << "The filtered values are not the same as {1, 2, 3}" << std::endl;
    }
    
    return 0;
}