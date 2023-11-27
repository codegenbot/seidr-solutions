#include <vector>
#include <list>
#include <boost/any.hpp>

using namespace std;

vector<int> filter_integers(list<boost::any> values);

bool issame(vector<int> a, vector<int> b);

int main() {
    list<boost::any> values;
    values.push_back(10);
    values.push_back(3.14);
    values.push_back("hello");
    values.push_back(20);
    values.push_back(7);
    values.push_back(2.5);

    vector<int> result = filter_integers(values);

    for (auto num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

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