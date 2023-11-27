#include <iostream>
#include <vector>
#include <list>
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

bool issame(vector<boost::any> a, vector<boost::any> b) {
    return a == b;
}

int main() {
    vector<boost::any> a = {1, 2, 3};
    vector<boost::any> b = {1, 2, 3};
    
    cout << issame(a, b) << endl;
    
    return 0;
}