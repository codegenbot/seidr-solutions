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

    std::vector<int> vec1 = generate_integers(a, b);
    std::vector<int> vec2 = generate_integers(a, b);

    if(issame(vec1, vec2)){
        std::cout << "Equal" << std::endl;
    } else {
        std::cout << "Not Equal" << std::endl;
    }

    return 0;
}