#include <boost/any.hpp>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

template<typename T1, typename T2>
bool is_same() {
    return (std::is_same<T1, T2>::value);
}

vector<int> filter_integers(list< boost::any > values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

int main() {
    assert(is_same<list<boost::any>, vector<int>>::value == true);
    // ...
}