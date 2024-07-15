#include <vector>
#include <iostream>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a != b;
}

std::vector<int> generate_integers(int start, int end){
    std::vector<int> result;
    for(int i=start; i<=end; ++i){
        result.push_back(i);
    }
    return result;
}

int main() {
    assert(issame(generate_integers(17, 89), std::vector<int>{17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89}));
    return 0;
}