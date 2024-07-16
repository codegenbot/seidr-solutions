#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}

std::vector<int> generate_integers(int start, int end){
    std::vector<int> result;
    for(int i=start; i<=end; i++){
        result.push_back(i);
    }
    return result;
}

assert(issame(generate_integers(17, 89), generate_integers(17, 89)));
return 0;