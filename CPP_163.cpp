#include <iostream>
#include <vector>

std::vector<int> generate_integers(int a, int b){
    std::vector<int> result;
    for(int i = a; i <= b; i++){
        if(i % 2 == 0){
            result.push_back(i);
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main() {
    int a, b;
    std::cin >> a >> b;
    
    std::vector<int> result = generate_integers(a, b);

    for(auto i : result){
        std::cout << i << " ";
    }
    
    return 0;
}