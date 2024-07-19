bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

vector<string> total_match(const vector<string>& lst1, const vector<string>& lst2) {
    if (totalChars(lst1) < totalChars(lst2)) {
        return lst1;
    } else {
        return totalChars(lst1) == totalChars(lst2) ? lst1 : lst2;
    }
}

int totalChars(const vector<string>& lst) {
    int total = 0;
    for (const string& str : lst) {
        total += str.size();
    }
    return total;
}