#include <vector>
#include <boost/any.hpp>
#include <list>

using list_any = std::list<boost::any>;

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (auto value : values) {
        if (auto intValue = boost::any_cast<int>(&value)) {
            result.push_back(*intValue);
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    // Code for comparing vector a and b
    return false;
}

int main() {
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    return 0;
}