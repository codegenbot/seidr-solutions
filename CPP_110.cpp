string exchange(vector<int> lst1, vector<int> lst2) {
    int even_count = 0;
    for (int num : lst1) {
        if (num % 2 == 0) {
            even_count++;
        }
    }
    if (even_count == lst1.size()) {
        return "YES";
    } else {
        for (int num : lst2) {
            if (std::find(lst1.begin(), lst1.end(), num) != lst1.end() && num % 2 != 0) {
                return "NO";
            }
        }
        return "YES";
    }
}