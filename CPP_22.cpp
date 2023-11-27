#include <iostream>
#include <vector>
#include <list>
#include <boost/any.hpp>

using namespace std;

vector<int> filter_integers(list<boost::any> values){
    vector<int> result;
    for (auto value : values) {
        if (boost::any_cast<int>(&value) != nullptr) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

bool issame(int a, int b){
    return a == b;
}

int main() {
    list<boost::any> values = {1, 2, 3, "hello", 4.5, 5};
    vector<int> filtered = filter_integers(values);
    for (auto num : filtered) {
        cout << num << " ";
    }
    cout << endl;
    cout << "Is 10 same as 20? " << (issame(10, 20) ? "Yes" : "No") << endl;
    return 0;
}