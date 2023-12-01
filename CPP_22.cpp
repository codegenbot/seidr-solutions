#include <vector>
#include <list>
#include <boost/any.hpp>
#include <iostream>

using namespace std;
using boost::any_cast; // Add this line to use any_cast without specifying boost:: namespace

vector<int> filter_integers(list<boost::any> values) {
    vector<int> result;
    for (auto& value : values) {
        if (value.type() == typeid(int)) {
            result.push_back(any_cast<int&>(value));
        }
    }
    return result;
}

int main() {
    for (int num : filter_integers({3, 'c', 3, 3, 'a', 'b'})) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}