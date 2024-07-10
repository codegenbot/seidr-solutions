#include <boost/any.hpp>
#include <vector>
#include <list>

using namespace boost;

bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<int> filter_integers(list<any> values){
    vector<int> result;
    for (auto& value : values) {
        if (any_cast<int>(value)) {
            result.push_back(any_cast<int>(value));
        }
    }
    return result;
}