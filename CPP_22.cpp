#include <iostream>
#include <list>
#include <vector>
#include <boost/any.hpp>

using namespace std;

vector<int> filter_integers(list<boost::any> values) {
    vector<int> result;
    for (auto value : values) {
        if (boost::any_cast<int>(&value)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

bool issame(int x, int y) {
    return x == y;
}

int main() {
    list<boost::any> values = {1, boost::any(3.14), 5, "Hello"};
    vector<int> filtered_values = filter_integers(values);
    for (auto value : filtered_values) {
        cout << value << " ";
    }
    cout << endl;
    cout << issame(5, 5) << endl;
    return 0;
}