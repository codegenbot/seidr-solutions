#include <boost/any.hpp>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;
using namespace boost;

bool is_same(const vector<int>& v1, const vector<int>& v2) {
    return v1.size() == v2.size() && all_of(v1.begin(), v1.end(), [&v2](int x) { return count_if(v2.begin(), v2.end(), bind2nd(BOOST_ISTREAM_EQ(), x)) > 0; });
}

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (any_cast<int>(value)) {
            result.push_back(any_cast<int>(value));
        }
    }
    return result;
}

int main() {
    assert(is_same(filter_integers({3, any('c'), 3, 3, any('a'), any('b')}), {3, 3, 3}));
    // ...
}