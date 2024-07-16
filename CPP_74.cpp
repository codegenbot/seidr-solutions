int sum_chars(vector<string> lst) {
        int total = 0;
        for (string s : lst) {
            total += s.size();
        }
        return total;
    }

    vector<string> total_match(vector<string> lst1, vector<string> lst2) {
        if (sum_chars(lst1) < sum_chars(lst2)) {
            return lst1;
        } else {
            return sum_chars(lst1) == sum_chars(lst2) ? lst1 : lst2;
        }
    }