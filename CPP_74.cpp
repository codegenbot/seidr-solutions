bool issame(vector<string> a, vector<string> b) {
    return a == b;
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
    vector<string> lst1 = {"apple", "banana"};
    vector<string> lst2 = {"orange", "pear"};

    vector<string> result = total_match(lst1, lst2);
    vector<string> expected = {"orange", "pear"};

    if (issame(result, expected)) {
        cout << "Output matches expected result" << endl;
    } else {
        cout << "Output does not match expected result" << endl;
    }

    return 0;
}