#include <vector>
#include <list>
#include <boost/any.hpp>

using namespace std;

vector<int> filter_integers(list<boost::any> values) {
    vector<int> result;
    for (auto value : values) {
        if (value.type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

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

int main() {
    // Test the filter_integers function
    list<boost::any> values;
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

    cout << issame(a, b) << endl; // Output: 1 (true)
    cout << issame(a, c) << endl; // Output: 0 (false)

    return 0;
}