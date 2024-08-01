#include <vector>
#include <cassert>

std::vector<int> f(int n){
    std::vector<int> result;
    for(int i = 1; i <= n; i++){
        result.push_back(i);
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main(){
    std::vector<int> test1 = f(5);
    std::vector<int> test2 = {1, 2, 3, 4, 5};

    assert(issame(test1, test2));
    
    return 0;
}