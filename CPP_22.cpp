#include <vector>
#include <list>
#include <any>
#include <boost/any.hpp>

using namespace std;

bool areSame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<optional<int>>(value).has_value()) {
            result.push_back(*boost::any_cast<optional<int>>(value));
        }
    }
    return result;
}

int main() {
    assert(areSame(filter_integers({3, any('c'), 3, 3, any('a'), any('b')}), vector({3, 3, 3}) ));
}