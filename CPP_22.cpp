#include <vector>
#include <list_any>
#include <boost/any.hpp>

bool issame(vector<int> a, vector<int> b);

vector<int> filter_integers(list_any values);

bool issame(vector<int> a, vector<int> b) {
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

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (auto value : values) {
        if (value.type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

int main() {
    // Test the filter_integers function
    list_any values;
    values.push_back(10);
    values.push_back(3.14);
    values.push_back("hello");
    values.push_back(20);

    vector<int> filtered = filter_integers(values);
    for (auto num : filtered) {
        cout << num << " ";
    }
    cout << endl;

    // Test the issame function
    vector<int> a = {1, 2, 3};
    vector<int> b = {1, 2, 3};
    vector<int> c = {1, 2, 4};

    cout << issame(a, b) << endl;
    cout << issame(a, c) << endl;

    return 0;
}