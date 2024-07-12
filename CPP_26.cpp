bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

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

int main() {
    assert(issame({1, 4, 5}, remove_duplicates({1, 2, 3, 2, 4, 3, 5})));
}