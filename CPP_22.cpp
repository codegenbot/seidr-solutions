#include <iostream>
#include <vector>
#include <list>
#include <any>

using namespace std;
namespace boost {
    struct any {
        template<typename T> bool operator!=(T t) const {
            return !(*this == t);
        }
        template<typename T> bool operator==(T t) const {
            try {
                T t2 = any_cast<T>(*this);
                return t == t2;
            } catch (...) {
                return false;
            }
        }
    };
}

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<optional<int>>(value)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

bool functionIsEqual(vector<int> a, vector<int> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

int main() {
    assert(functionIsEqual(filter_integers({3, any('c'), 3, 3, any('a'), any('b') }),{3, 3, 3}));
    return 0;
}