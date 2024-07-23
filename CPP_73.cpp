int smallest_change(std::vector<int> arr) {
    int n = arr.size();
    assert(n > 0);

    int changes = 0;
    int last_unique = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] == last_unique) {
            continue;
        }
        last_unique = arr[i];
        changes++;
    }

    return changes;
}