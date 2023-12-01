#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    std::vector<int> result;
    for(int i=0; i<a.size(); i++){
        result.push_back(abs(a[i] - b[i]));
    }
    return result;
}

int main() {
    assert(issame({1,2,3,5},{-1,2,3,4}) == std::vector<int>({2,0,0,1}));
    return 0;
}