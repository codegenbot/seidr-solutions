```
#include <vector>
#include <unordered_map>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); i++) {
        if(std::find(b.begin(), b.end(), a[i]) == b.end())
            return false;
    }
    return true;
}

std::vector<int> remove_duplicates(const std::vector<int>& numbers) {
    unordered_map<int, bool> map;
    vector<int> result;

    for (int num : numbers) {
        if (!map[num]) {
            map[num] = true;
            result.push_back(num);
        }
    }

    return result;
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    std::cout << "Original: ";
    for(int i : numbers)
        std::cout << i << " ";
    std::cout << "\n";
    
    std::vector<int> result = remove_duplicates(numbers);
    std::cout << "After removing duplicates: ";
    for(int i : result)
        std::cout << i << " ";
    std::cout << "\n";

    std::vector<int> numbers2 = {1, 2, 3, 4, 5};
    if(issame(numbers, numbers2))
        std::cout << "The vectors are same.\n";
    else
        std::cout << "The vectors are not same.\n";
    
    return 0;
}