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
    // Sample code to test the modified function
    list<boost::any> input_values;
    input_values.push_back(1);
    input_values.push_back("hello");
    input_values.push_back(3.14);
    input_values.push_back(2);
    input_values.push_back(4);
    input_values.push_back(6);
    
    vector<int> filtered_values = filter_integers(input_values);
    
    vector<int> expected_output = {1, 2, 4, 6};
    
    if (issame(filtered_values, expected_output)) {
        cout << "Test Passed!" << endl;
    } else {
        cout << "Test Failed!" << endl;
    }
    
    return 0;
}