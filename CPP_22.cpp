#include <boost/any.hpp>
#include <iostream>
using namespace std;

bool issame(vector<int> a,vector<int>b){
    return a == b;
}

int main() {
    vector< boost::any > values = {3, boost::any(3), 3, boost::any('a'), boost::any('b')};
    assert(issame(filter_integers(values),{3,3,3}));
    return 0;
}

vector<int> filter_integers(vector<boost::any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).good()) {
            result.push_back(boost::any_cast<int>(value).get());
        }
    }
    return result;
}