#include <vector>
#include <unordered_map>
#include <initializer_list>

std::vector<int> remove_duplicates(std::vector<int> numbers) {
    std::unordered_map<int, bool> map;
    std::vector<int> result;

    for (int num : numbers) {
        if (!map[num]) {
            map[num] = true;
            result.push_back(num);
        }
    }

    return result;