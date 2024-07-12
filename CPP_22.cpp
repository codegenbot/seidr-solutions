#include <boost/any.hpp>
#include <iostream>
#include <list>
#include <type_traits>
#include <vector>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    list<boost::any> values = {3, 3, 3};
    vector<int> result = filter_integers(values);
    
    for (const auto& value : result) {
        cout << value << " ";
    }
    cout << endl;

    if (issame({1, 2, 3}, {1, 2, 3})) {
        cout << "The two lists are the same." << endl;
    } else {
        cout << "The two lists are different." << endl;
    }

    return 0;
}

vector<int> filter_integers(list<boost::any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<bool>(std::any_cast<boost::any>(value)).type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}