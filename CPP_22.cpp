#include <vector>
#include <list>
#include <any>

using namespace std;

vector<vector<int>> filter_integers(list<any> values) {
    vector<vector<int>> result;
    for (const auto& value : values) {
        if (any_cast<int>(value).type() == typeid(int)) {
            int integer = any_cast<int>(value);
            vector<int> integers;
            integers.push_back(integer);
            result.push_back(integers);
        }
    }
    return result;
}

int main() {
    vector<int> expected({3, 3, 3});
    assert(isSame(filter_integers({3, any(3), 3, any('a'), any('b')}), {expected}));
    return 0;
}

bool isSame(vector<any> a, vector<any>b){
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size();i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}