bool issame(const vector<string>& a, const vector<string>& b) {
    return totalChars(a) == totalChars(b);
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
    vector<string> input1 = {"hello", "world"};
    vector<string> input2 = {"cpp", "contest", "problem"};

    vector<string> result = total_match(input1, input2);

    assert(result.size() == input1.size());
    assert(result[0] == "hello");
    assert(result[1] == "world");

    return 0;
}