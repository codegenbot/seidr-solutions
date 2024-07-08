#include <initializer_list>
#include <vector>

bool std::operator==(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}

std::vector<int> remove_duplicates(std::vector<int> numbers) {
    std::unordered_map<int, bool> mp;
    std::vector<int> result;

    for (int i = 0; i < numbers.size(); i++) {
        if (!mp.count(numbers[i])) {
            mp[numbers[i]] = true;
            result.push_back(numbers[i]);
        }
    }

    return result;
}