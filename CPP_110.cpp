string exchange(vector<int> lst1, vector<int> lst2) {
    int even_count = 0;
    for (int num : lst1) {
        if (num % 2 == 0)
            even_count++;
    }
    for (int num : lst2) {
        if (num % 2 == 0) {
            even_count--;
            break;
        } else {
            even_count++;
        }
    }
    return even_count >= 0 ? "YES" : "NO";
}