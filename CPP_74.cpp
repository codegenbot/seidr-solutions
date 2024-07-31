int countChars(const vector<string>& lst) {
        int count = 0;
        for (const string& str : lst) {
            count += str.length();
        }
        return count;
    }

    vector<string> total_match(vector<string> lst1, vector<string> lst2) {
        if (countChars(lst1) < countChars(lst2)) {
            return lst1;
        }
        else {
            return countChars(lst1) == countChars(lst2) ? lst1 : lst2;
        }
    }