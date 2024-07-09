```cpp
#include <boost/any.hpp>
bool issame(std::vector<int> a,std::vector<int>b){
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (!boost::any_cast<bool>(value)) continue; // skip non-integer values
        int num = boost::any_cast<int>(value);
        if(result.empty()) {
            result.push_back(num);
        } else if(!issame(result, vector<int>({num}))) {
            for (auto it : result) {
                bool found = false;
                for(int i = 0; i < values.size(); i++) {
                    if(boost::any_cast<int>(values[i]) == it) {
                        values.erase(values.begin() + i);
                        found = true;
                        break;
                    }
                }
                if(!found) {
                    result.clear();
                    break;
                }
            }
        } else {
            result.push_back(num);
        }
    }
    return result;
}