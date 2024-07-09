#include <vector>

bool issame(vector<int> a,vector<int> b){
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); ++i) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

int make_a_pile(int n){
    vector<int> pile;
    int val = 2;
    while(val <= n) {
        pile.push_back(val);
        val += 2;
    }
    return issame(pile, {8, 10, 12, 14, 16, 18, 20, 22});
}

int main() {
    assert(make_a_pile(8));
    return 0;
}