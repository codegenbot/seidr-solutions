#include <iostream>
#include <vector>
#include <algorithm>

bool checkVectors(std::vector<int> a, std::vector<int> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> remove_duplicates(std::vector<int> numbers){
    std::set<int> unique;
    for(int num : numbers)unique.insert(num);
    return std::vector<int>(unique.begin(), unique.end());
}

int main() {
    assert(checkVectors(remove_duplicates({1, 2, 3, 2, 4, 3, 5}), {1, 4, 5}));
    return 0;
}