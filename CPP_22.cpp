#include <boost/any.hpp>
#include <vector>
#include <list>

using namespace std;
using namespace boost;

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (any_cast<int>(value).type() == typeid(int)) {
            int num = any_cast<int>(value);
            if (!num) continue; // 0 is considered as not present
            result.push_back(num);
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}