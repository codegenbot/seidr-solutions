#include <boost/container.hpp>

bool same(boost::container::vector<int> a, boost::container::vector<int> b) {
    return (a.size() == b.size()) && std::all_of(a.begin(), a.end(), [&](int x) { return std::find(b.begin(), b.end(), x) != b.end(); });
}