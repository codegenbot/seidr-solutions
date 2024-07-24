vector<int> remove_duplicates(vector<int> numbers) {
    unordered_map<int, bool> seen;
    vector<int> result;

    for (int number : numbers) {
        if (!seen.count(number) || !seen[number]) {
            seen[number] = true;
            result.push_back(number);
        }
    }

    return result;
}