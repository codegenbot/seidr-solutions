string exchange(vector<int> lst1, vector<int> lst2) {
    int evenCount = 0;
    for (int num : lst1) {
        if (num % 2 == 0)
            evenCount++;
    }
    
    for (int num : lst2) {
        if (find(lst1.begin(), lst1.end(), num) != lst1.end()) {
            continue;
        } else if (num % 2 == 0) {
            evenCount++;
        }
    }
    
    return (evenCount == lst1.size()) ? "YES" : "NO";
}