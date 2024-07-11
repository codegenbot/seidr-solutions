#include <vector>
#include <list>
#include <boost/any.hpp>
#include <typeinfo>
#include <cassert>

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> filter_integers(std::list<boost::any> values){
    vector<int> result;
    for(auto val : values){
        if (val.type() == typeid(int)){
            result.push_back(boost::any_cast<int>(val));
        }
    }
    return result;
}

int main() {
    std::list<boost::any> values;
    values.push_back(10);
    values.push_back('c');
    values.push_back(20);

    vector<int> filtered = filter_integers(values);
    vector<int> expected = {10, 20};

    assert(issame(filtered, expected));

    return 0;
}