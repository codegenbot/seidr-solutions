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
    auto comp = [](const string& a, const string& b) {
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    };
    sort(lst.begin(), lst.end(), comp);
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
    vector<string> sorted_a = vector_sort(a);
    vector<string> sorted_b = vector_sort(b);
    for (int i = 0; i < a.size(); i++) {
        if (sorted_a[i] != sorted_b[i]) {
            return false;
        }
    }
    return true;
}