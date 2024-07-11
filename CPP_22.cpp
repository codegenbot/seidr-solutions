#include <boost/any.hpp>
#include <vector>
#include <list>

using namespace std;
using namespace boost;

vector<int> filter_integers(list<boost::any> values) {
    vector<int> result;
    for (const auto& value : values) {
        int num = any_cast<int>(value);
        if (!num.empty()) {
            result.push_back(num);
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    return 0;
}