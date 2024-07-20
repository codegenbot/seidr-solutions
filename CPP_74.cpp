bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2);

int countChars(const vector<string>& lst) {
    int total = 0;
    for (const string& str : lst) {
        total += str.size();
    }
    return total;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    if (countChars(lst1) < countChars(lst2)) {
        return lst1;
    }
    return countChars(lst1) == countChars(lst2) ? lst1 : lst2;
}