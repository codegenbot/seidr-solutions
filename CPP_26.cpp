vector<int> remove_duplicates(vector<int> numbers) {
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