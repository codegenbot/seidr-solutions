#include <iostream>
#include <list>
#include <vector>
#include <boost/any.hpp>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(unsigned int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> filter_integers(list<boost::any> values) {
    vector<int> result;
    for(auto& val : values) {
        if(val.type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(val));
        }
    }
    return result;
}

int main(int argc, char* argv[]) {
    list<boost::any> values_any = {2, "hello", 5, 8, "world", 3};
    vector<int> filtered_integers = filter_integers(values_any);

    for(auto num : filtered_integers) {
        cout << num << " ";
    }
    
    return 0;
}