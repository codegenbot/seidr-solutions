int exchange(vector<int> lst1, vector<int> lst2) {
    int odd_count = 0;
    for (int num : lst1) {
        if (num % 2 != 0)
            odd_count++;
    }
    for (int i = 0; i < lst1.size(); i++) {
        if (lst1[i] % 2 != 0) {
            int j = rand() % odd_count;
            swap(lst1[i], lst2[j]);
            odd_count--;
        }
    }
    return 1;
}