#include <boost/any.hpp>
#include <vector>
#include <cassert>

using namespace std;

vector<int> filter_integers(vector<boost::any> values) {
    vector<int> result;
    for (auto value : values) {
        if (value.type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

bool issame_vectors(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame_vectors(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
}