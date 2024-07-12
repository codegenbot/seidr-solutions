#include <boost/any.hpp>
#include <iostream>
#include <list>
#include <vector>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<int> filter_integers(list< boost::any > values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

int main() {
    list< boost::any > values = {3, 3, 3};
    vector<int> filtered_values = filter_integers(values);
    
    if (issame({1, 2, 3}, filtered_values)) {
        cout << "Values are the same." << endl;
    } else {
        cout << "Values are not the same." << endl;
    }
    
    return 0;
}