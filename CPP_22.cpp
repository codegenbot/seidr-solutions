#include <vector>
#include <list>
#include <boost/any.hpp>
#include <cassert>

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> filter_integers(list<boost::any> values){
    vector<int> result;
    for(auto val : values){
        if (val.type() == typeid(int)){
            result.push_back(boost::any_cast<int>(val));
        }
    }
    return result;
}

int main() {
    list<boost::any> values = {5, 'c', 10, 15, 'c', 20};
    vector<int> expected = {5, 10, 15, 20};

    vector<int> filtered = filter_integers(values);

    assert(filtered == expected);

    return 0;
}