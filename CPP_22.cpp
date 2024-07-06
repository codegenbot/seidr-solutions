#include <boost/any.hpp>
#include <vector>
#include <list>
#include <typeindex>

using namespace std;
using namespace boost;

bool issame(const vector<int>& v1, const vector<int>& v2) {
    if (v1.size() != v2.size()) return false;
    for (int i = 0; i < v1.size(); ++i) {
        if (v1[i] != v2[i]) return false;
    }
    return true;
}

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (any_cast<int>(value).which() == typeindex<int>()) {
            int x = any_cast<int>(value).get();
            bool duplicate = false;
            for (int y : result) {
                if (y == x) {
                    duplicate = true;
                    break;
                }
            }
            if (!duplicate) {
                result.push_back(x);
            }
        }
    }
    return result;
}