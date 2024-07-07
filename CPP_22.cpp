#include <vector>
#include <list>
#include <boost/any.hpp>
#include <boost/type_index.hpp>

bool issame(const boost::any& a, const boost::any& b) {
    return boost::typeindex::type_id_with_cvr(a.type()) == boost::typeindex::type_id_with_cvr(b.type());
}

vector<int> filter_integers(list<any> values){
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}