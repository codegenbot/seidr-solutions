#include <iostream>
#include <vector>
#include <utility>

bool issame(std::vector<int> a, std::vector<int> b) {
    if(a.size() != b.size()) 
        return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i])
            return false;
    }
    return true;
}

std::pair<int, int> compare(std::vector<int> a, std::vector<int> b) {
    int first_diff_index = -1;
    for(int i = 0; i < a.size() && i < b.size(); i++) {
        if(a[i] != b[i]) {
            first_diff_index = i;
            break;
        }
    }
    return {first_diff_index, first_diff_index + 1};
}

int main() {
    assert(issame({1,2,3,5}, {-1,2,3,4}) == {0,1});
    return 0;
}