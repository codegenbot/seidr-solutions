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

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame({1, 4, 5}, remove_duplicates({1, 2, 3, 2, 4, 3, 5})));
    return 0;
}