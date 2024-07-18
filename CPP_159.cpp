#include <iostream>
#include <cassert>
#include <vector> 

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> eat(int number, int remaining) {
    int total = number + remaining;
    int eaten = total > remaining ? remaining : total;
    int left = remaining - eaten;
    return {eaten, left};
}

int main() {
    assert(issame(eat(4, 5), {5, 0}));
    return 0;
}