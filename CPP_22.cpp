```cpp
#include <boost/any.hpp>
#include <vector>
#include <list>

bool issame(std::vector<int> a,std::vector<int>b){
    if(a.size() != b.size()) return false;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        try {
            int val = boost::any_cast<int>(value);
            result.push_back(val);
        } catch (...) {
            // handle exception if the value is not an integer
        }
    }
    return result;
}