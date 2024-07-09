#define BOOST_ALL_DYN_LINK 1
#include <boost/config.hpp>
#include <boost/any.hpp>

using namespace std;
namespace boost {
namespace any {
class bad_any_cast : public bad_cast { };
template<class T> struct any_cast {
    const any& a;
    explicit any_cast(any& a) : a(a) {}
    operator T() const { if (!a.good()) throw bad_any_cast(); return any_cast<T>(a).get();
};
} // namespace any
} // namespace boost

vector<int> filter_integers(list<boost::any> values) {
    vector<int> result;
    for (const auto& value : values) {
        try {
            int val = boost::any_cast<int>(value);
            result.push_back(val);
        } catch (...) {
            // ignore non-integer values
        }
    }
    return result;
}

bool issame(vector<int> a,vector<int>b){
    return (a.size() == b.size()) && equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert(issame(filter_integers({3, boost::any("c"), 3, 3, boost::any("a"), boost::any("b")}) ,{3, 3, 3}));
    return 0;
}