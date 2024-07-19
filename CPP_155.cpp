#include <vector>
#include <iostream>
#include <cassert>
#include <string>
#include <cstdlib>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> even_odd_count(int num) {
    std::vector<int> result(2, 0);
    std::string numStr = std::to_string(std::abs(num));
    
    for(char c : numStr){
        if((c - '0') % 2 == 0){
            result[0]++;
        } else {
            result[1]++;
        }
    }
    
    return result;
}

int main() {
    int num;
    std::cin >> num;
    std::vector<int> result = even_odd_count(num);
    for(int i : result){
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}