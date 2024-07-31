#include <vector>

bool issame(std::vector<int> a, std::vector<int> b){
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> tri(int n){
    std::vector<int> result(n + 1);
    result[1] = 3;
    if(n >= 2) result[2] = 1 + n / 2;
    for(int i = 3; i <= n; ++i){
        if(i % 2 == 0){
            result[i] = 1 + i / 2;
        } else {
            result[i] = result[i - 1] + result[i - 2] + result[i + 1];
        }
    }
    return result;
}

int main(){
    assert (issame(tri(1) , {1, 3}));

    return 0;
}