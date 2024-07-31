#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> tri(int n){
    std::vector<int> result;
    result.push_back(3);
    int a = 1, b = 3;
    for(int i = 1; i < n; ++i){
        if(i % 2 == 0){
            result.push_back(a);
            a++;
        } else {
            result.push_back(b);
            b += (result[i - 1] + result[i - 2] + result[i]);
        }
    }
    return result;
}

int main(){
    assert(issame(tri(2), {3, 1}));

    return 0;
}