int charCount(vector<string> lst) {
        int total = 0;
        for (string str : lst) {
            total += str.size();
        }
        return total;
    }
    
    vector<string> total_match(vector<string> lst1, vector<string> lst2) {
        if (charCount(lst1) < charCount(lst2)) {
            return lst1;
        }
        return charCount(lst1) == charCount(lst2) ? lst1 : lst2;
    }