bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(issame(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}), {"cccc", "dd", "aaaa", "bbbb"}));
    return 0;
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