#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> remove_duplicates(std::vector<int> numbers) {
    std::vector<int> result = numbers;
    std::sort(result.begin(), result.end());
    for(int i = 0; i < result.size() - 1; i++){
        if(result[i] == result[i + 1]){
            result.erase(result.begin() + i);
            i--;
        }
    }
    return result;
}

int main(){
    assert(isame(remove_duplicates({1, 2, 3, 2, 4, 3, 5}), {1, 2, 3, 4, 5}));
    return 0;
}