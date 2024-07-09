string exchange(vector<int> lst1, vector<int> lst2) {
    int even_count = 0;
    for (int num : lst1) {
        if (num % 2 == 0) {
            even_count++;
        }
    }
    for (int num : lst2) {
        if (num % 2 != 0 && even_count > 0) {
            return "YES";
        } else if (num % 2 == 0 && even_count < 1) {
            return "NO";
        }
        if (num % 2 == 0) {
            even_count++;
        }
    }
    if (even_count == lst1.size()) {
        return "NO";
    } else {
        return "YES";
    }
}