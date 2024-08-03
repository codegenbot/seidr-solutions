#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}

std::vector<int> generate_integers(int n){
    std::vector<int> result(n);
    std::iota(result.begin(), result.end(), 1);
    return result;
}

int main(){
    std::vector<int> vec1 = generate_integers(5);
    std::vector<int> vec2 = generate_integers(5);

    if(issame(vec1, vec2)){
        return 1;
    } else {
        return 0;
    }
}