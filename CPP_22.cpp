```cpp
#include <boost/any.hpp>
#include <vector>

bool issame(vector<boost::any> a, vector<boost::any> b) {
    if (a.size() != b.size())
        return false;
    for (size_t i = 0; i < a.size(); i++) {
        bool a_bool = boost::any_cast<bool>(a[i]);
        bool b_bool = boost::any_cast<bool>(b[i]);
        int a_int = boost::any_cast<int>(a[i]);
        int b_int = boost::any_cast<int>(b[i]);

        if (a_bool != b_bool || a_int != b_int)
            return false;
    }
    return true;
}

vector<int> filter_integers(vector<boost::any> values) {
    vector<int> result;
    for (const auto& value : values) {
        boost::any_cast<bool>(value);
        if (boost::any_cast<bool>(value)) {
            int num = boost::any_cast<int>(value);
            bool isInt = std::isfinite(num);
            if (isInt) {
                result.push_back(num);
            }
        }
    }
    return result;
}

int main() {
    assert(issame(filter_integers({3, boost::any('c'), 3, 3, boost::any('a'), boost::any('b')}), {3, 3, 3}));
    return 0;
}