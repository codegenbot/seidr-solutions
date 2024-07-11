vector<int> remove_duplicates(vector<int> numbers) {
    vector<int> result;
    for (int num : numbers) {
        bool found = false;
        for (int i = 0; i < result.size(); i++) {
            if (result[i] == num) {
                found = true;
                break;
            }
        }
        if (!found) {
            result.push_back(num);
        }
    }
    return result;
}