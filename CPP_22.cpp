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
            result.push_back(std::any_cast<int>(val));
        }
    }
    return result;
}

bool issame(const vector<int>& a, const vector<int>& b){
    return a == b;
}

int main(){
    assert(issame(filter_integers({std::any(3), std::any('c'), std::any(3), std::any(3), std::any('a'), std::any('b')}), {3, 3, 3}));
    return 0;
}