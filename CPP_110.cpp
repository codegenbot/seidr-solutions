string exchange(vector<int> lst1, vector<int> lst2) {
    int even_count = 0;
    for (int num : lst1) {
        if (num % 2 == 0) {
            even_count++;
        }
    }
    for (int num : lst2) {
        if (num % 2 != 0) {
            return "NO";
        }
    }
    if (even_count < lst1.size()) {
        return "YES";
    } else {
        return "NO";
    }
}