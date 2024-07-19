#include <vector>
#include <list>
#include <boost/any.hpp>
#include <cassert>

bool issame(vector<int> a, vector<int> b);

vector<int> filter_integers(std::list<boost::any> values);

int main() {
    // Your main function code here
}

bool issame(vector<int> a, vector<int> b) {
    // Your issame function code here
}

vector<int> filter_integers(std::list<boost::any> values){
    vector<int> result;
    for(auto val : values){
        if(auto ptr = boost::any_cast<int>(&val)){
            result.push_back(*ptr);
        }
    }
    return result;
}