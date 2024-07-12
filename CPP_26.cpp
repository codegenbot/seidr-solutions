std::vector<int> remove_duplicates(std::vector<int> numbers) {
    std::unordered_map<int, bool> map;
    for (int num : numbers) {
        if (!map[num]) {
            map[num] = true;
        } else {
            map[num] = false;
        }
    }
    std::vector<int> result;
    for (int num : numbers) {
        if (map[num]) {
            result.push_back(num);
        }
    }
    return result;
}