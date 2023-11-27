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
    list<boost::any> values;
    values.push_back(10);
    values.push_back("hello");
    values.push_back(20);
    values.push_back(30);
    values.push_back("world");
    values.push_back(40);

    vector<int> filtered_values = filter_integers(values);

    vector<int> expected_values = {10, 20, 30, 40};
    if (issame(filtered_values, expected_values)) {
        cout << "Filtered values are correct!" << endl;
    } else {
        cout << "Filtered values are incorrect!" << endl;
    }

    return 0;
}