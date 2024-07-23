#include <boost/variant.hpp>
#include <vector>
#include <list>

using namespace std;
using namespace boost::any;

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (holds_alternative<int>(value)) {
            int v = get<int>(value);
            result.push_back(v);
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}