#include <vector>
#include <algorithm>

bool same(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> removeDuplicates(std::vector<int> numbers) {
    std::vector<int> result;
    for (int i : numbers) {
        if (std::find(result.begin(), result.end(), i) == result.end()) {
            result.push_back(i);
        }
    }
    return result;
}

int main(){
    assert(same(removeDuplicates({1, 2, 3, 2, 4, 3, 5}), {1, 2, 3, 4, 5}));
    return 0;
}