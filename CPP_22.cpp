```cpp
#include <type_traits>

vector<int> filter_integers(list_any values){
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;

}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}