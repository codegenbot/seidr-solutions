bool issame(const string& a, const string& b) {
    vector<string> list1;
    vector<string> list2;

    for (const auto& str : a) {
        if (str.length() % 2 == 0) {
            list1.push_back(str);
        }
    }

    for (const auto& str : b) {
        if (str.length() % 2 == 0) {
            list2.push_back(str);
        }
    }

    sort(list1.begin(), list1.end());
    sort(list2.begin(), list2.end());

    return list1 == list2;
}

vector<string> sorted_list_sum(vector<vector<string>>& lst) {
    vector<string> result;

    for (const auto& str : lst[0]) {
        if (str.length() % 2 == 0) {
            result.push_back(str);
        }
    }

    for (int i = 1; i < lst.size(); ++i) {
        bool same = false;
        for (const auto& str : lst[i]) {
            if (issame(result, vector<string>(1, str))) {
                same = true;
                break;
            }
        }

        if (!same) {
            result.clear();
            for (const auto& str : lst[i]) {
                if (str.length() % 2 == 0) {
                    result.push_back(str);
                }
            }
            sort(result.begin(), result.end(),
                 [](const string& a, const string& b) {
                     if (a.length() != b.length()) {
                         return a.length() < b.length();
                     } else {
                         return a < b;
                     }
                 });
        }
    }

    return result;
}