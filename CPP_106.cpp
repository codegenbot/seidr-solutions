#include <vector>
#include <cassert>

std::vector<int> issame(std::vector<int> a, std::vector<int> b){
    for(int i=0; i<a.size(); ++i){
        if(a[i] != b[i]){
            return {0};
        }
    }
    return {1};
}

int main(){
    assert(issame({1, 2, 3}, {1, 2, 6}) == 0);
    return 0;
}