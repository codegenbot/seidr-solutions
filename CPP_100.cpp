#include <vector>
using namespace std;

bool issame(vector<int> a,vector<int>b){
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main(){
    assert(issame(vector<int>(make_a_pile(8)) , vector<int>({8, 10, 12, 14, 16, 18, 20, 22})));
    return 0;
}