int sum_chars(const vector<string>& lst) {
        int sum = 0;
        for (const string& str : lst) {
            sum += str.size();
        }
        return sum;
    }

    vector<string> total_match(vector<string> lst1, vector<string> lst2) {
        if (sum_chars(lst1) < sum_chars(lst2)) {
            return lst1;
        }
        return lst2;
    }