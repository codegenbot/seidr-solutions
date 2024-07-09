string exchange(vector<int> lst1, vector<int> lst2) {
    int evenCount = 0;
    for (int num : lst1) {
        if (num % 2 == 0) {
            evenCount++;
        }
    }
    for (int num : lst2) {
        if (num % 2 == 0) {
            lst1.push_back(num);
            lst2.erase(std::remove(lst2.begin(), lst2.end(), num), lst2.end());
        }
    }
    return evenCount == lst1.size() ? "YES" : "NO";
}