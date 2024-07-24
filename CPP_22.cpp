#include <vector>
#include <boost/any.hpp>

using namespace std;

vector<int> filter_integers(vector<boost::any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (holds_alternative<boost::any>(value)) {
            try {
                result.push_back(boost::get<int>(value));
            } catch (...) {
                // ignore non-integer values
            }
        }
    }
    return result;
}

bool isSame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}