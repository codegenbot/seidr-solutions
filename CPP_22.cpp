#include <boost/any.hpp>

using namespace std;

vector<int> filter_integers(list<any> values){
    vector<int> result;
    for (const auto& value : values) {
        if (value.type() == typeid(int)) {
            int val = any_cast<int>(value);
            result.push_back(val);
        }
    }
    return result;
}