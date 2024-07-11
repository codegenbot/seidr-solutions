#include <boost/container.hpp>

bool same(boost::container::vector<int> a, boost::container::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(same(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3})); 
}