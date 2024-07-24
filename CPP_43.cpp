unordered_set<int> seen;
    for (int num : l) {
        if (seen.count(-num) > 0) {
            return true;
        } else {
            seen.insert(num);
        }
    }
    return false;
}