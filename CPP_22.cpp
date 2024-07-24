```cpp
#include <boost/any.hpp>
#include <vector>
#include <list>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> filter_integers(list<boost::any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).type()) {
            bool same = false;
            // Check if the integer is in the desired list
            for (const int num : {1, 2, 3}) {
                if (*boost::any_cast<int*>(value) == num) {
                    same = true;
                    break;
                }
            }
            if (same) {
                result.push_back(boost::any_cast<int>(value));
            }
        }
    }
    return result;
}