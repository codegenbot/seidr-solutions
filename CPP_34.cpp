#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const vector<int>& a, const vector<int>& b){
    if (a.size() != b.size()) return false;
    for(int i=0; i<a.size(); i++){
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<int> uniquify(vector<int> l){
    sort(l.begin(), l.end());
    l.erase(std::unique(l.begin(), l.end()), l.end());
    return l;
}

int main(){
    assert(issame(uniquify({5, 3, 5, 2, 3, 3, 9, 0, 123}), {0, 2, 3, 5, 9, 123}));
    std::cout << "Test cases passed" << std::endl;
    return 0;
}