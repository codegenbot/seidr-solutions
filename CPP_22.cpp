```cpp
#include <boost/any.hpp>
#include <vector>
#include <list>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

std::vector<int> filter_integers(std::list<boost::any>& values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if(boost::any_cast<int>(value).good()) {
            int temp = boost::any_cast<int>(value).get();
            vector<int> v;
            for(int i = 0; i < temp; i++) {
                v.push_back(i);
            }
            if(issame(result, v)) {
                result.clear();
            } else {
                result.insert(result.end(), v.begin(), v.end());
            }
        }
    }
    return result;
}