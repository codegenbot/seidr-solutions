string exchange(vector<int> lst1, vector<int> lst2) {
    int even_count = 0;
    for (int num : lst1) {
        if (num % 2 == 0) {
            even_count++;
        }
    }
    if (even_count == lst1.size()) {
        return "YES";
    } else {
        vector<int> odd_nums;
        for (int num : lst1) {
            if (num % 2 != 0) {
                odd_nums.push_back(num);
            }
        }
        for (int num : lst2) {
            if (find(odd_nums.begin(), odd_nums.end(), num) != odd_nums.end()) {
                return "YES";
            }
        }
        return "NO";
    }
}