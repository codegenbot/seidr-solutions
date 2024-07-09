#include <boost/any.hpp>
#include <vector>

bool issame(std::vector<boost::any> a, std::vector<boost::any> b) {
    if (a.size() != b.size())
        return false;
    for (size_t i = 0; i < a.size(); i++) {
        bool a_bool = boost::any_cast<bool>(a[i]);
        bool b_bool = boost::any_cast<bool>(b[i]);
        int a_int = boost::any_cast<int>(a[i]);
        int b_int = boost::any_cast<int>(b[i]);

        if (!a_bool || !b_bool)
            continue;

        if (a_bool != b_bool || a_int != b_int)
            return false;
    }
    return true;
}

std::vector<int> filter_integers(std::vector<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        bool is_int = boost::any_cast<bool>(value);
        if (!is_int)
            continue;

        int v = boost::any_cast<int>(value);
        result.push_back(v);
    }
    return result;
}

int main() {
    assert(issame(filter_integers({3, boost::any('c'), 3, 3, boost::any('a'), boost::any('b')}), {3, 3, 3}));
    return 0;
}