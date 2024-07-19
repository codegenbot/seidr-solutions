```cpp
#include <vector>
#include <algorithm>

std::vector<int> pluck(const std::vector<int>& v) {
    if(v.size() > 0){
        return {};
    }
    else{
        return v;
    }
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main(int argc, char *argv[]) {
    assert(issame(pluck({7, 9, 7, 1}), std::vector<int>{}));
    return 0;
}