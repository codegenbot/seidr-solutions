#include <vector>
using namespace std;

bool areSameVectors(vector<int> v1, vector<int> v2) {
    if(v1.size() != v2.size()) return false;
    for(int i = 0; i < v1.size(); i++) {
        if(v1[i] != v2[i]) return false;
    }
    return true;
}

int eat(int a, int b, int c) {
    vector<int> v(a, a);
    for(int i = 0; i < c; i++) {
        v.push_back(b);
    }
    return 0;
}

int main() {
    assert(areSameVectors(eat(4, 5, 1), vector<int>({9,0})));
    return 0;
}