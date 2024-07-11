#include <boost/container.hpp>
#include <list>

bool same(boost::container::vector<int> a, boost::container::vector<int> b) {
    return a == b;
}

int main() {
    assert(same(filter_integers({3, 'c', 3, 3, 'a', 'b'}), boost::container::vector<int>{3, 3, 3})); 
}