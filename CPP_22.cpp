#include <vector>
#include <list> // Add the appropriate header file here
#include <boost/any.hpp> // Add the appropriate header file here

vector<int> filter_integers(std::list<boost::any> values) {
    vector<int> result;
    for (auto value : values) {
        if (value.type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) { // Add the missing `<` after `vector<int>`
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); i++) {
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
    values.push_back('a');
    values.push_back(3);
    values.push_back(4.7);
    values.push_back('b');
    
    vector<int> filtered = filter_integers(values);
    vector<int> expected = {1, 3};
    
    if (issame(filtered, expected)) {
        cout << "Test passed" << endl;
    } else {
        cout << "Test failed" << endl;
    }
    
    return 0;
}