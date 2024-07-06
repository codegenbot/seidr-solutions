bool issame(vector<int> a, vector<int> b) {
    return a == b;
}
vector<int> remove_duplicates(vector<int> numbers) {
    vector<int> result;
    for (int num : numbers) {
        bool found = false;
        for (int x : result) {
            if (num == x) {
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