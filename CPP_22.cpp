#include <vector>
#include <list>
#include <any>
#include <cassert>

using namespace std;

bool is_same(const vector<int>& a, const vector<int>& b){
    return a == b;
}

vector<int> filter_integers(const list<any>& values){
    vector<int> result;
    for (const auto& val : values) {
        if (val.type() == typeid(int)) {
            result.push_back(any_cast<int>(val));
        }
    }
    return result;
}

int main(){
    assert(is_same(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    return 0;
}