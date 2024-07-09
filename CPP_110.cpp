string exchange(vector<int> lst1, vector<int> lst2) {
    int even_count = 0;
    for (int num : lst1) {
        if (num % 2 == 0)
            even_count++;
    }
    for (int num : lst1) {
        if (num % 2 != 0) {
            bool found = false;
            for (int other_num : lst2) {
                if (other_num % 2 == 0) {
                    swap(num, other_num);
                    found = true;
                    break;
                }
            }
            if (!found)
                return "NO";
        }
    }
    return even_count == lst1.size() ? "YES" : "NO";
}