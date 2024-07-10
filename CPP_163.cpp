#include <vector>

std::vector<int> generate_integers(int a, int b){
    std::vector<int> result;
    for(int i = a; i <= b; ++i){
        if(i % 2 == 0){
            result.push_back(i);
        }
    }
    return result;
}

#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main(){
    auto generated_integers = generate_integers(17, 89);
    assert(issame(generated_integers, {}));
} 