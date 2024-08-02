#include <vector>

bool issame(const std::vector<int>& v1, const std::vector<int>& v2){
    if(v1.size() != v2.size()){
        return false;
    }
    for(size_t i = 0; i < v1.size(); ++i){
        if(v1[i] != v2[i]){
            return false;
        }
    }
    return true;
}

int main(){
    assert(issame(std::vector<int>{1, 2, 6}, std::vector<int>{1, 2, 6}));
    return 0;
}