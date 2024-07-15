int totalChars(vector<string> lst) {
        int total = 0;
        for (string s : lst) {
            total += s.size();
        }
        return total;
    }

    vector<string> total_match(vector<string> lst1, vector<string> lst2) {
        int totalChars1 = totalChars(lst1);
        int totalChars2 = totalChars(lst2);

        if (totalChars1 < totalChars2) {
            return lst1;
        } else {
            return lst2;
        }
    }