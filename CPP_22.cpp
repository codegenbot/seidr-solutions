#include <vector>
#include <list>
#include <boost/any.hpp>

using namespace std;
using namespace boost;

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (any_cast<int>(value)) {
            result.push_back(any_cast<int>(value));
        }
    }
    return result;
}

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}