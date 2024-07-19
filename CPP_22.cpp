#include <vector>
#include <boost/any.hpp>

using namespace std;

vector<int> filter_integers(list<any> values){
    vector<int> result;
    for (auto val : values) {
        if (val.type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(val));
        }
    }
    return result;
}