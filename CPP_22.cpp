#include <vector>
#include <boost/variant.hpp>

using namespace std;
using namespace boost;

std::vector<int> filter_integers(vector<variant<int>> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (holds_alternative<int>(value)) {
            result.push_back(get<int>(value));
        }
    }
    return result;
}

bool is_same(const vector<int>& a, const vector<int>& b) {
    return a == b;
}