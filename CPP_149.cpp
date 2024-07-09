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

vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> evens, odds;

    for (const auto& str : lst) {
        if (str.length() % 2 == 0) {
            evens.push_back(str);
        } else {
            odds.push_back(str);
        }
    }

    sort(evens.begin(), evens.end());
    sort(odds.begin(), odds.end());

    vector<string> result;
    for (const auto& str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back(evens.front());
            evens.pop_front();
        } else {
            result.push_back(odds.front());
            odds.pop_front();
        }
    }

    return result;
}