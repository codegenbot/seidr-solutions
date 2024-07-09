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
#include <list>

using namespace std;

using AnyType = variant<int, double>; // You may need to include more types here
using AnyList = vector<AnyType>;

vector<int> filter_integers(AnyList values) {
    vector<int> result;
    for (const auto& value : values) {
        if (holds_alternative<int>(value)) {
            int intValue = get<int>(value);
            result.push_back(intValue);
        }
    }
    return result;
}