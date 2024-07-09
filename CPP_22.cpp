#include <vector>
#include <list>
#include <any>

using namespace std;

vector<int> filter_integers(list<any> values);

bool isSame(vector<int> a, vector<int>b){
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size();i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    vector<int> result = filter_integers({3, any(3), 3, any('a'), any('b')});
    assert(isSame(result,{3, 3, 3}));
    return 0;
}