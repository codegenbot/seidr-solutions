bool issame(vector<string> a, vector<string> b) {
    return a == b;
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
             return accumulate(a.begin(), a.end(), 0) <
                    accumulate(b.begin(), b.end(), 0) ? -1 :
                    accumulate(a.begin(), a.end(), 0) > 
                    accumulate(b.begin(), b.end(), 0) ? 1 : 
                    a < b ? -1 : a > b;
         });
    return result;
}