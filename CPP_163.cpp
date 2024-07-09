#include <vector>
#include <cassert>

std::vector<int> generate_integers(int start, int end) {
    std::vector<int> result;
    for(int i = start; i <= end; ++i){
        if(i % 2 == 0){
            result.push_back(i);
        }
    }
    return result;
}

bool is_same(std::vector<int> vec1, std::vector<int> vec2) {
    return vec1 == vec2;
}

int main() {
    assert(is_same(generate_integers(17, 89), std::vector<int>{}));
    return 0;
}