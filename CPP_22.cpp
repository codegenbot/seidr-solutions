#include <vector>
#include <list>
#include <boost/any.hpp>

bool issame(vector<int> a, vector<int> b) {
    // function body here
}

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).type().is_class<int>()) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

int main() {
    assert(issame(filter_integers({3, any('c'), 3, 3, any('a'), any('b')}), {3, 3, 3}));
    return 0;
}