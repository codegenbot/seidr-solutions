#include <vector>
#include <list>
#include <boost/any.hpp>

using namespace std;
using namespace boost;

vector<int> filter_integers(list<any> values){
    vector<int> result;
    for(auto val : values){
        if(typeid(int) == val.type()){
            result.push_back(any_cast<int>(val));
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

int main(){
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    return 0;
}