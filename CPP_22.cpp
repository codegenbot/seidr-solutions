#include <boost/any.hpp>
#include <iostream>
#include <list>
#include <vector>

bool issame(const vector<int>& a, const vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    std::list<boost::any> values = {3, 3, 3};
    vector<int> result = filter_integers(values);
    
    for (const auto& value : result) {
        std::cout << value << " ";
    }
    std::cout << std::endl;
    
    if (issame({1, 2, 3}, {1, 2, 3})) {
        std::cout << "Vectors are the same" << std::endl;
    } else {
        std::cout << "Vectors are not the same" << std::endl;
    }
    
    return 0;
}

vector<int> filter_integers(list<boost::any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}