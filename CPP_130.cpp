#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> tri(int n){
    std::vector<int> result;
    result.push_back(3);
    for(int i = 1; i < n; ++i){
        if(i % 2 == 0){
            result.push_back(1 + i / 2);
        } else {
            result.push_back(result[i - 1] + result[i - 2] + result[i - 3]);
        }
    }
    return result;
}

int main(){
    assert(issame(tri(2), std::vector<int>{3, 1}));

    return 0;
}