#include <vector>
#include <list>
#include <boost/any.hpp>

using namespace std;
using namespace boost;

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        int val = any_cast<int>(value);
        if (!val) continue;
        result.push_back(val);
    }
    return result;
}

int main() {
    assert(issame(filter_integers({3, 0, 3, 3, 0, 'b'}), {3, 3, 3}));
    return 0;
}