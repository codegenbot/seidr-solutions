bool issame(vector<string> a, vector<string> b) {
    for (int i = 0; i < a.size(); i++) {
        if (!issame_helper(a[i], b[i])) return false;
    }
    return true;
}

bool issame_helper(string s1, string s2) {
    return s1.length() == s2.length();
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    if (issame(lst1, lst2)) {
        if (lst1.size() < lst2.size()) return lst1;
        else if (lst1.size() > lst2.size()) return lst2;
        else return lst1;
    } else if (total_length(lst1) <= total_length(lst2)) {
        return lst1;
    } else {
        return lst2;
    }
}

int total_length(vector<string> v) {
    int sum = 0;
    for (const string& s : v) {
        sum += s.length();
    }
    return sum;
}