#include <vector>
#include <any>
#include <algorithm>
#include <cassert>

using namespace std;
using std::any;

vector<int> filter_integers(const vector<any>& values){
    vector<int> result;
    for (const auto &val : values) {
        if (val.type() == typeid(int)) {
            result.push_back(any_cast<int>(val));
        }
    }
    return result;
}

int main(){
    assert(issame(filter_integers({any(3), any(99), any(3), any(3), any(97), any(98)}), {3, 3, 3}));
    return 0;
}