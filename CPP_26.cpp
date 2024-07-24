```cpp
#include <vector>
#include <set>

std::vector<int> remove_duplicates(std::vector<int> numbers){
    std::set<int> unique_numbers(numbers.begin(), numbers.end());
    std::vector<int> result;
    for(auto num : unique_numbers) {
        bool exists = false;
        for(int i = 0; i < result.size(); ++i) {
            if(result[i] == num) {
                exists = true;
                break;
            }
        }
        if(!exists) {
            result.push_back(num);
        }
    }
    return result;

}

bool same(const std::vector<int>& a, const std::vector<int>& b) {
    return (a == b);
}

int main() {
    assert(same(remove_duplicates({1, 2, 3, 2, 4, 3, 5}), {1, 4, 5}));
    return 0;
}