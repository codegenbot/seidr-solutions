#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size(); ++i){
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> solve(int n) {
    std::vector<int> res;
    if (n >= 0) {
        res.push_back(3);
        if (n > 0) {
            res.push_back(1);
            for (int i = 2; i <= n; ++i) {
                if (i % 2 == 0) {
                    res.push_back(1 + i / 2);
                } else {
                    res.push_back(res[i - 1] + res[i - 2] + res[i - 1]);
                }
            }
        }
    }
    return res;
}

int main(){
    assert(issame(solve(0), {3}));
    assert(issame(solve(1), {3, 1}));
    assert(issame(solve(3), {3, 1, 2, 5}));
    return 0;
}