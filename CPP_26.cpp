#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> remove_duplicates(std::vector<int> numbers);

bool is_same(std::vector<int> a, std::vector<int> b);

int main(){
    assert(is_same(remove_duplicates({1, 2, 3, 2, 4, 3, 5}), {1, 4, 5}));
    return 0;
}

std::vector<int> remove_duplicates(std::vector<int> numbers){
    std::vector<int> result;
    for(int i=0; i<numbers.size(); i++){
        if(std::count(numbers.begin(), numbers.end(), numbers[i]) == 1){
            result.push_back(numbers[i]);
        }
    }
    return result;
}

bool is_same(std::vector<int> a, std::vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}