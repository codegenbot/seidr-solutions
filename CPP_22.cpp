#include <boost/variant.hpp>
#include <vector>
#include <list>

using namespace std;
using namespace boost::any;

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (any_cast<int>(value).which() == 0) {
            result.push_back(any_cast<int>(value));
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}