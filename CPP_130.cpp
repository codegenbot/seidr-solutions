#include <vector>

bool issame(std::vector<int> a, std::vector<int> b){
    // Function implementation here
}

std::vector<int> tri(int n){
    std::vector<int> sequence(n+1);
    
    if(n >= 0)
        sequence[0] = 1;
    if(n >= 1)
        sequence[1] = 3;
    if(n >= 2)
        sequence[2] = 2;
    
    for(int i = 3; i <= n; i++){
        if(i % 2 == 0)
            sequence[i] = 1 + i / 2;
        else
            sequence[i] = sequence[i - 1] + sequence[i - 2] + sequence[i + 1];
    }
    
    return sequence;
}

int main(){
    assert(issame(tri(1), {1, 3}));
    return 0;
}