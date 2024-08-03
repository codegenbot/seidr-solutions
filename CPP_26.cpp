#include <vector>
#include <algorithm>

bool int_equal(int a, int b) {
    return a == b;
}

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> remove_duplicates(std::vector<int> numbers){
    std::vector<int> result;
    for(int num : numbers) {
        if(find_if(result.begin(), result.end(), bind1st(ptr_fun(int_equal), num)) == result.end()) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    vector<int> result = remove_duplicates({1, 2, 3, 2, 4, 3, 5});
    assert (issame(vector<int>(result.begin(), result.end()), {1, 4, 5})
    return 0;
}