#include <vector>

std::vector<int> generate_integers(int a, int b) {
    std::vector<int> result;
    for(int i = a; i <= b; ++i) {
        if(i % 2 == 0) {
            result.push_back(i);
        }
    }
    return result;
}

bool issame(std::vector<int> v1, std::vector<int> v2) {
    return v1 == v2;
}