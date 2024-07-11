#include <vector>
#include <list>
#include <any>
#include <cassert>

using namespace std;

vector<int> filter_integers(list<any> values){
    vector<int> result;
    for(auto val : values){
        if(val.type() == typeid(int)){
            result.push_back(any_cast<int>(val));
        }
    }
    return result;
}

int main(){
    assert(issame(filter_integers({any(3), any('c'), any(3), any(3), any('a'), any('b')}), {3, 3, 3}));
    return 0;
}