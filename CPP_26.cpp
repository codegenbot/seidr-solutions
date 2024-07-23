#include <vector>
#include <algorithm>

bool operator==(const std::vector<int>& a, const std::vector<int>& b){
    if(a.size() != b.size()) return false;
    for(size_t i = 0; i < a.size(); ++i) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> remove_duplicates(std::vector<int> numbers) {
    std::vector<int> result;
    for(int num : numbers){
        if(find(result.begin(), result.end(), num) == result.end()){
            result.push_back(num);
        }
    }
    return result;
}

int main(){
    assert(std::is_same(remove_duplicates({1, 2, 3, 2, 4, 3, 5}), std::vector<int>({1, 4, 5})));
    return 0;
}