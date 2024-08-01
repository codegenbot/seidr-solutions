#include <algorithm>
#include <cassert>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b);

bool issame(std::vector<int> a, std::vector<int> b){
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

int main() {
    // Testing the issame function
    std::vector<int> vec1 = {1, 2, 3};
    std::vector<int> vec2 = {1, 2, 3};
    assert(issame(vec1, vec2) == true);

    std::vector<int> vec3 = {4, 5, 6};
    std::vector<int> vec4 = {1, 2, 3};
    assert(issame(vec3, vec4) == false);

    return 0;
}