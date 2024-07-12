#include <boost/any.hpp>
#include <vector>
#include <list>
#include <typeinfo>

using namespace std;
using namespace boost;

bool issame(list_any a, list_any b) {
    if(a.type() != b.type())
        return false;

    vector-any v1 = a.to_vector();
    vector-any v2 = b.to_vector();

    if(v1.size() != v2.size())
        return false;

    for(int i = 0; i < v1.size(); i++) {
        if(v1[i].type() != v2[i].type())
            return false;
    }

    return true;
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