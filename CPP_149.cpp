vector<string> vector_sort(vector<string> lst) {
    auto comp = [](const string& a, const string& b) {
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    };
    sort(lst.begin(), lst.end(), comp);
    vector<string> result;
    for (const auto& str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back(str);
        }
    }
    return result;
}

int sorted_list_sum(vector<string> lst) {
    sort(lst.begin(), lst.end());
    int sum = 0;
    for (const auto& str : lst) {
        sum += str.length();
    }
    return sum;
}

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    vector<string> c = vector_sort(a);
    for (int i = 0; i < a.size(); i++) {
        if (c[i] != b[i]) {
            return false;
        }
    }
    return true;
}