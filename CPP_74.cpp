int sumChars(vector<string> v) {
        int sum = 0;
        for (string s : v) {
            sum += s.length();
        }
        return sum;
    }

    vector<string> total_match(vector<string> lst1, vector<string> lst2){
        if (sumChars(lst1) < sumChars(lst2)) {
            return lst1;
        } else {
            return (sumChars(lst1) == sumChars(lst2)) ? lst1 : lst2;
        }
    }