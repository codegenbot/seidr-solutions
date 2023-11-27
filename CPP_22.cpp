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
    values.push_back(1);
    values.push_back(2.5);
    values.push_back("hello");
    values.push_back(3);
    values.push_back(4.7);
    values.push_back(5);

    vector<int> result = filter_integers(values);

    vector<int> expected = {1, 3, 5};

    if (issame(result, expected)) {
        cout << "Test case passed" << endl;
    } else {
        cout << "Test case failed" << endl;
    }

    return 0;
}