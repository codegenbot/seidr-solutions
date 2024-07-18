bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

int totalChars(const vector<string>& lst) {
    int total = 0;
    for (const string& str : lst) {
        total += str.size();
    }
    return total;
}

vector<string> total_match(const vector<string>& lst1, const vector<string>& lst2) {
    if (totalChars(lst1) < totalChars(lst2)) {
        return lst1;
    }
    return lst2;
}

int main() {
    vector<string> lst1 = {"abc", "def", "ghi"};
    vector<string> lst2 = {"jkl", "mno"};

    vector<string> result = total_match(lst1, lst2);

    assert(result == lst2);
}