#include <vector>

std::vector<int> generate_integers(int a, int b) {
    std::vector<int> result;
    for(int i = a; i <= b; ++i) {
        if(issame(i)) {
            result.push_back(i);
        }
    }
    return result;
}