#include <vector>
#include <list>
#include <boost/any.hpp>

vector<int> filter_integers(std::list<boost::any> values) {
    vector<int> result;
    for (auto value : values) {
        if (typeid(value) == typeid(int)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame(filter_integers({boost::any(3), 'c', boost::any(3), boost::any(3), 'a', 'b'}), {3, 3, 3}));
   
    return 0;
}