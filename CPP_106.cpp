#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    assert(a.size() == b.size());

    for(size_t i = 0; i < a.size(); ++i){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

std::vector<int> f(int n){
    std::vector<int> result(n);
    for(int i = 1; i <= n; ++i){
        result[i-1] = (i % 2 == 0 ? i * (i - 1) : i * (i + 1));
    }
    return result;
}

int main() {
    std::vector<int> expected{0, 2, 6, 12};
    std::vector<int> actual = f(4);

    if(issame(expected, actual)){
        return 0;
    } else {
        return 1;
    }
}