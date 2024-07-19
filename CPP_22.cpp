#include <boost/any.hpp>
#include <vector>
#include <list>

using namespace std;
using namespace boost;

bool issame(const boost::any& a1, const boost::any& a2) {
    return get<int>(a1) == get<int>(a2);
}

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (is_same<typeid(int), typeid(any_cast<any>(value))>::value) {
            result.push_back(any_cast<int>(value));
        }
    }
    return result;
}