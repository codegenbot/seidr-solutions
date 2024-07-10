bool issame(const vector<string>& lst1, const vector<string>& lst2) {
        return lst1 == lst2;
    }

    int countChars(const vector<string>& lst1) {
        int count = 0;
        for (const string& str : lst1) {
            count += str.size();
        }
        return count;
    }

    vector<string> total_match(vector<string> lst1, vector<string> lst2);

    vector<string> total_match(vector<string> lst1, vector<string> lst2) {
        if (countChars(lst1) < countChars(lst2)) {
            return lst1;
        }
        return lst2;
    }