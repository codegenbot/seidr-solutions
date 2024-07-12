```cpp
#include <boost/any.hpp>
#include <boost/type_index.hpp>

bool issame(const vector<int>& a, const vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (any_cast<int>(value).type() == typeid(int)) {
            result.push_back(any_cast<int>(value));
        }
    }
    return result;
}

int main() {
    list<any> values = {3, any(3), 3};
    vector<int> filtered_values = filter_integers(values);
    if (issame({1, 2, 3}, filtered_values)) {
        cout << "Success" << endl;
    } else {
        cout << "Failed" << endl;
    }
}