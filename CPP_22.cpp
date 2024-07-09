#include <boost/any.hpp>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

template<typename T1, typename T2>
bool issame(const boost::any& a) {
    return boost::any_cast<T1>(a) != 0 && boost::any_cast<T2>(a) == 0;
}

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if(boost::any_cast<int>(value, 0)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return vector<int>(result.begin(), result.end());
}

int main() {
    assert(is_same(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    // ...
}