string exchange(vector<int> lst1, vector<int> lst2) {
    int oddCount = 0;
    for (int num : lst1) {
        if (num % 2 != 0)
            oddCount++;
    }
    for (int num : lst2) {
        if (num % 2 == 0 && oddCount > 0) {
            lst1.push_back(num);
            lst2.erase(std::remove(lst2.begin(), lst2.end(), num), lst2.end());
            oddCount--;
        } else if (num % 2 != 0) {
            return "NO";
        }
    }
    return oddCount == 0 ? "YES" : "NO";
}