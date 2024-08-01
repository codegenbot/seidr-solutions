#include <vector>
#include <boost/any.hpp>

using namespace std;

bool issame(vector<int> a,vector<int>b){
    return (a.size() == b.size()) && equal(a.begin(), a.end(), b.begin());
}

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        try {
            int val = boost::any_cast<int>(value);
            if (!isnan(val)) { // Check if the value is NaN
                result.push_back(val);
            }
        } catch (...) {
            // If it's not an integer, just ignore it
        }
    }
    return result;
}