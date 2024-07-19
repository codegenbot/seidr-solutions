#include <vector>
#include <iostream>
#include <cassert>
#include <string>
#include <cstdlib>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main(){
    std::vector<int> result = even_odd_count(0);
    for (int i : result) {
        std::cout << i << " ";
    }
    
    return 0;
}