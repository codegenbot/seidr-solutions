#include <boost/any.hpp>

bool issame(vector<int> a,vector<int>b){
    if(a.size() != b.size()) return false;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

#include <vector>
using namespace std;

class list_any {
public:
    class value_type {};
};

vector<int> filter_integers(list_any::value_type values) {
    vector<int> result;
    for (const auto& value : values) {
        if (any_cast<int>(value).good()) {
            result.push_back(any_cast<int>(value));
        }
    }
    return result;
}