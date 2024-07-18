#include <iostream>
#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b); // Function prototype

bool issame(std::vector<int> a, std::vector<int> b){
    // Implement the issame function
}

std::vector<int> intersperse(std::vector<int> numbers, int delimiter); // Function prototype

std::vector<int> intersperse(std::vector<int> numbers, int delimiter){
    // Implement the intersperse function
}

int main(){
    assert(issame(intersperse({2, 2, 2}, 2), {2, 2, 2, 2, 2}));
    return 0;
}