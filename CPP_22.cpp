#include <boost/any.hpp>
#include <vector>
#include <list>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<int> filter_integers(list<boost::any> values) {
    vector<int> result;
    for (const auto& value : values) {
        int casted_value = boost::any_cast<int>(value);
        if(casted_value) {
            result.push_back(casted_value);
        }
    }
    return result;
}