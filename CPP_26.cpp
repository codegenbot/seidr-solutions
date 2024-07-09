#include <vector>
#include <algorithm>

stdAME(std::vector<int> a, std::vector<int> b){
    if(a.size() != b.size()) return false;
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> remove_duplicates(std::vector<int> numbers){
    std::vector<int> result;
    for(int num : numbers){
        if(std::find(result.begin(), result.end(), num) == result.end()){
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    int nums[] = {1, 2, 3, 2, 4, 3, 5};
    std::vector<int> numbers(nums, nums + sizeof(nums)/sizeof(nums[0]));
    assert(issame(remove_duplicates(numbers), std::vector<int>{1, 2, 3, 4, 5}));
    return 0;
}