#include <vector>
#include <list>
#include <boost/any.hpp>
#include <typeinfo>
#include <cassert>

bool issame(vector<int> a, vector<int> b);

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
    std::list<boost::any> input = {'c', 5, 'c', 10, 'c', 15};
    vector<int> output = filter_integers(input);
    vector<int> expected = {5, 10, 15};
    assert(output == expected);
    return 0;
}