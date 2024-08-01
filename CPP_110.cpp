bool hasOdd(int num) {
    return (num & 1);
}

string exchange(vector<int> lst1, vector<int> lst2) {
    for (int num : lst1) {
        if (!hasOdd(num)) continue;
        bool found = false;
        for (int other : lst2) {
            if (hasOdd(other)) {
                swap(lst1[distance(lst1.begin(), find(lst1.begin(), lst1.end(), num))], other);
                found = true;
                break;
            }
        }
        if (!found) return "NO";
    }
    return "YES";
}