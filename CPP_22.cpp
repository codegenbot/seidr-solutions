#include <iostream>
#include <list>
#include <vector>
#include <boost/any.hpp>

using namespace std;

vector<int> filter_integers(list<boost::any> values){
    vector<int> result;
    for (auto value : values) {
        if (boost::any_cast<int>(&value)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

bool issame(int a, int b){
    return a == b;
}

int main() {
    list<boost::any> values = {1, 2, 3, 4, "hello", 5.5};
    vector<int> filtered_values = filter_integers(values);

    for (auto value : filtered_values) {
        cout << value << " ";
    }
    cout << endl;

    cout << issame(5, 5) << endl;

    return 0;
}