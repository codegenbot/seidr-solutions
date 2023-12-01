#include <vector>
#include <list>
#include <iostream>
#include <boost/any.hpp>

using namespace std;

vector<int> filter_integers(list<boost::any> values) {
    vector<int> result;
    for (auto& value : values) {
        if (value.type() == typeid(int)) {
            result.push_back(boost::any_cast<int&>(value));
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