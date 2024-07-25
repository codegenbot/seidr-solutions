#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    sort(a.begin(), a.end());
    a.erase(std::unique(a.begin(), a.end()), a.end());
    return a == b;
}

std::vector<int> test_unique(){
    std::vector<int> v = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    std::vector<int> expected = {0, 2, 3, 5, 9, 123};
    std::vector<int> result(v.begin(), std::unique(v.begin(), v.end()));
    assert(issame(result, expected));
    return result;
}