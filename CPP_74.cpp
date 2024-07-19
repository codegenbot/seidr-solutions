bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

int countChars(const vector<string>& lst) {
    int count = 0;
    for (const string& str : lst) {
        count += str.size();
    }
    return count;
}

vector<string> total_match(const vector<string>& lst1, const vector<string>& lst2) {
    if (countChars(lst1) < countChars(lst2)) {
        return lst1;
    }
    return lst2;
}

int main() {
    assert(issame(total_match({"this"}, {}), {}));
    return 0;
}