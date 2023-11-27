#include <vector>
#include <list>
#include <boost/any.hpp>
#include <cassert>

using namespace std;
using namespace boost;

bool issame(vector<int> a, vector<int> b){
    // implementation of the function
    // code here...
    return true;
}

vector<int> filter_integers(list<any> values){
    vector<int> result;
    for (auto value : values) {
        if (value.type() == typeid(int)) {
            result.push_back(any_cast<int>(value));
        }
    }
    return result;
}

int main(){
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    // rest of the code
    return 0;
}