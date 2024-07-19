#include <algorithm>

bool issame(vector<int> a,vector<int>b){
    return (a.size() == b.size()) && (a == b);
}

auto unique_copy(vector<int>::iterator first, vector<int>::iterator last) {
    std::vector<int> result(std::unique_copy(first, last));
    return result;
}