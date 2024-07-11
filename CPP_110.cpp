string exchange(vector<int> lst1, vector<int> lst2) {
    int even_count = 0;
    for (int num : lst1) {
        if (num % 2 == 0)
            even_count++;
    }
    if (even_count == lst1.size())
        return "YES";
    for (int num : lst2) {
        if (num % 2 == 0 && even_count < lst1.size()) {
            lst1.push_back(num);
            lst2.erase(std::remove(lst2.begin(), lst2.end(), num), lst2.end());
            even_count++;
        }
    }
    return "NO";
}