#include <boost/any.hpp>
#include <iostream>
#include <vector>
#include <list>
#include <stdexcept>

using namespace std;

template <typename T1, typename T2>
bool issame(const vector<T1>& v1, const vector<T2>& v2) {
    if (v1.size() != v2.size())
        return false;
    for (size_t i = 0; i < v1.size(); ++i) {
        if (!(v1[i] == static_cast<typename T1::value_type>(v2[i])) &&
            !static_cast<bool>(dynamic_pointer_cast<T1>(&v2[i])))
            return false;
    }
    return true;
}

vector<int> filter_integers(list<boost::any>& values) {
    vector<int> result;
    for (const auto& value : values) {
        try {
            int integer = boost::any_cast<int>(value);
            result.push_back(integer);
        } catch(const bad_any_cast &) {
            // ignore non-integer values
        }
    }
    return result;
}

int main() {
    list<boost::any> values = { 1, 2.0f, 3, "hello", 4 };
    vector<int> integers = filter_integers(values);
    if (issame(vector<int>(({ 1, 3, 4 })), integers)) {
        cout << "Integers are the same." << endl;
    } else {
        cout << "Integers are not the same." << endl;
    }
    return 0;
}