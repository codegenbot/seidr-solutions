#include <vector>
#include <cassert>

bool is_same(vector<int> a, vector<int> b){
    vector<int> result;
    for(int i = a; i <= b; ++i){
        if(i % 2 == 0){
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    assert(is_same(generate_integers(17, 89), {}));
}