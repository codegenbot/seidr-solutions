#include <vector>
#include <boost/variant.hpp>

vector<int> filter_integers(vector<boost::variant<int>> values) {
    vector<int> result;
    for (const auto& value : values | boost::adaptors::filtered(boost::is_instance<int>)) {
        result.push_back(boost::get<int>(value));
    }
    return result;
}

bool is_same(const vector<int>& a, const vector<int>& b) {
    return a == b;
}