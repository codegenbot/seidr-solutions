string exchange(vector<int> lst1, vector<int> lst2) {
    int evenCount = 0;
    for (int num : lst1) {
        if (num % 2 == 0) {
            evenCount++;
        }
    }
    if (evenCount == lst1.size()) {
        return "YES";
    } else {
        for (int num : lst2) {
            if (std::find(lst1.begin(), lst1.end(), num) != lst1.end() && num % 2 != 0) {
                return "NO";
            }
        }
    }
    return "YES";
}