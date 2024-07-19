bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int total_chars(const vector<string>& lst) {
    int total = 0;
    for (const string& str : lst) {
        total += str.size();
    }
    return total;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    int total_chars_lst1 = total_chars(lst1);
    int total_chars_lst2 = total_chars(lst2);

    if (total_chars_lst1 < total_chars_lst2) {
        return lst1;
    } else {
        return lst2;
    }
}

int main() {
    vector<string> lst1 = {"apple", "banana", "cherry"};
    vector<string> lst2 = {"apple", "banana", "cherry"};

    vector<string> result = total_match(lst1, lst2);

    vector<string> expected_result = {"apple", "banana", "cherry"};

    if (issame(result, expected_result)) {
        // Output is as expected
        return 0;
    } else {
        // Output is not as expected
        return 1;
    }
}