#include <iostream>
#include <vector>
#include <list>
#include <boost/any.hpp>

using namespace std;

vector<int> filter_integers(list<boost::any> values){
    vector<int> result;
    for (auto value : values) {
        if (value.type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b){
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
    vector<int> filtered = filter_integers({3, 'c', 3, 3, 'a', 'b'});
    vector<int> expected = {3, 3, 3};

    if (issame(filtered, expected)) {
        cout << "Filtered result is correct!" << endl;
    } else {
        cout << "Filtered result is incorrect!" << endl;
    }

    return 0;
}