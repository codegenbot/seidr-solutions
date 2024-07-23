#include <vector>
#include <algorithm>

bool isSame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> removeDuplicates(std::vector<int> numbers) {
    std::vector<int> result;
    for(int num : numbers){
        if(std::find(result.begin(), result.end(), num) == result.end()){
            result.push_back(num);
        }
    }
    return result;
}

int main(){
    assert(isSame(removeDuplicates({1, 2, 3, 2, 4, 3, 5}), {1, 4, 5}));
    return 0;
}