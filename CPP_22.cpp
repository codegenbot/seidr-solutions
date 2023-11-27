#include <vector>
#include <list_any> 
#include <boost/any.hpp> 

vector<int> filter_integers(list_any values);

bool issame(vector<int> a, vector<int> b);

int main() {
    // Test the filter_integers function
    list_any values = {1, 2, 3, "hello", 4, 5.0, 6};
    vector<int> result = filter_integers(values);
  
    // Test the issame function
    vector<int> a = {1, 2, 3};
    vector<int> b = {1, 2, 3};
    if (issame(a, b)) {
        // Output the result
        for (int value : result) {
            cout << value << " ";
        }
        cout << endl;
    }
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