string exchange(vector<int> lst1, vector<int> lst2) {
    int odd_count_lst1 = 0;
    int even_count_lst2 = 0;

    for (int num : lst1) {
        if (num % 2 != 0) odd_count_lst1++;
    }

    for (int num : lst2) {
        if (num % 2 == 0) even_count_lst2++;
    }

    if (odd_count_lst1 <= even_count_lst2) {
        return "YES";
    } else {
        return "NO";
    }
}