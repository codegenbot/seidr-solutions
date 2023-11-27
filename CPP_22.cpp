#include <vector>
#include <list>
#include <boost/any.hpp>

using namespace std;
using namespace boost;

vector<int> filter_integers(list_any values){
    vector<int> result;
    for (auto value : values) {
        if (value.type() == typeid(int)) {
            result.push_back(any_cast<int>(value));
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b){
    return a == b;
}