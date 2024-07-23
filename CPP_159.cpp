#include <vector>
#include <cassert>
using namespace std;

int eat(int a, int b, int c) {
    return (a + b + c) / 3;
}

bool areSameVectors(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) 
        return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i])
            return false;
    }
    return true;
}

int main() {
    assert(areSameVectors({eat(4, 5, 1), vector<int>{0}});
    return 0;
}