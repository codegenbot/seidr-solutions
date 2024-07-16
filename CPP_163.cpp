#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    if(a.size() != b.size()) return false;
    for(size_t i = 0; i < a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> generate_integers(int start, int end){
    std::vector<int> result;
    for(int i = start; i <= end; i++){
        result.push_back(i);
    }
    return result;
}

int main(){
    assert(issame(generate_integers(17, 89), generate_integers(17, 89)));
    return 0;
}