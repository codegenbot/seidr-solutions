unordered_set<int> seen_values;
for (int num : l) {
    if (seen_values.count(-num) > 0) {
        return true;
    }
    seen_values.insert(num);
}
return false;