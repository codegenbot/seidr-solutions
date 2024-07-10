bool issame(vector<string> a, vector<string> b) {
    if(a != b) return false;
    for(size_t i = 0; i < a.size(); ++i) {
        sort(a[i].begin(), a[i].end());
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result;

    for (const auto& str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back(str);
        }
    }

    sort(result.begin(), result.end(),
         [](const string& a, const string& b) {
             if (a.size() != b.size()) {
                 return a.size() < b.size();
             } else {
                 return a < b;
             }
         });

    return result;
}