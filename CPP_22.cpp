```cpp
#include <boost/any.hpp>
#include <vector>
#include <list>

bool issame(const boost::any& a1, const boost::any& a2) {
    if (a1.type() != a2.type())
        return false;
    
    auto any_cast1 = boost::any_cast<int>(a1);
    auto any_cast2 = boost::any_cast<int>(a2);
    
    return *any_cast1 == *any_cast2;
}

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).type() == typeid(int)) {
            bool found = false;
            for (int i = 0; i < result.size(); ++i) {
                if (issame(value, boost::any(result[i]))) {
                    found = true;
                    break;
                }
            }
            if (!found)
                result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}