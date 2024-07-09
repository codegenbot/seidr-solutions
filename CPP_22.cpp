```
#include <iostream>
#include <vector>
#include <list>
#include <boost/any.hpp>

bool issame(std::vector<boost::any> a, std::vector<boost::any> b) {
    if (a.size() != b.size())
        return false;
    for (size_t i = 0; i < a.size(); i++) {
        if (!boost::any_cast<bool>(a[i]) || !boost::any_cast<bool>(b[i]))
            continue;
        if (boost::any_cast<int>(a[i]) != boost::any_cast<int>(b[i]))
            return false;
    }
    return true;
}

std::vector<int> filter_integers(std::list<boost::any> values){
    std::vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<bool>(value)) {
            int num = boost::any_cast<int>(value);
            bool isInt = true;
            try {
                int temp = boost::any_cast<int>(value);
            }
            catch (...) {
                isInt = false;
            }
            if(isInt)
                result.push_back(num);
        }
    }
    return result;
}

int main() {
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    return 0;
}