#include <vector>
#include <list> // Add the appropriate header file here
#include <boost/any.hpp> // Add the appropriate header file here

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

bool issame(vector<int> a, vector<int> b) { // Add the missing `<` after `vector<int>`
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
    vector<int> a = {1, 2, 3};
    vector<int> b = {1, 2, 3};

    if (issame(a, b)) {
        cout << "The two vectors are the same." << endl;
    } else {
        cout << "The two vectors are different." << endl;
    }

    return 0;
}