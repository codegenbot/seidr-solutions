#include <vector>
#include <list>
#include <any>

using namespace std;

vector<vector<int>> filter_integers(list<any> values) {
    vector<vector<int>> result;
    for (const auto& value : values) {
        if (any_cast<int>(value).type() == typeid(int)) {
            vector<int> v = {any_cast<int>(value)};
            bool found = false;
            for (auto &i : result) {
                if (isSame(i, v)) {
                    i.push_back(any_cast<int>(value));
                    found = true;
                    break;
                }
            }
            if (!found) {
                result.push_back(v);
            }
        }
    }
    return result;
}

int main() {
    vector<int> filter_integers(list<any> values);

    assert(isSame(filter_integers({3, any(3), 3, any('a'), any('b')}) ,{3, 3, 3}));
    return 0;
}

bool isSame(vector<int> a, vector<int>b){
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size();i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}