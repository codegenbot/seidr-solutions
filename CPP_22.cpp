// Your modified code

#include <vector>
#include <list>
#include <boost/any.hpp>
#include <iostream>

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
    // Your code here
    return 0;
}