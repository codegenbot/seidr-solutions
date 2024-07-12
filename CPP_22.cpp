```cpp
#include <boost/any.hpp>
#include <vector>
#include <list>
#include <typeinfo>

bool issame(const boost::any& a, const boost::any& b) {
    if (!a.type() == typeid(int) || !b.type() == typeid(int))
        return false;
    int x = boost::any_cast<int>(a);
    int y = boost::any_cast<int>(b);
    return x == y;
}

vector<int> filter_integers(list<boost::any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if(boost::any_cast<int>(value).type() == typeid(int)) {
            bool found = false;
            for (int i = 0; i < result.size(); ++i) {
                if(issame(value, boost::any(result[i])))
                    {found = true;break;}
            }
            if(!found)
                result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}