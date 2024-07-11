Here is the completed code:

vector<string> sorted_list_sum(vector<string> lst) {
    sort(lst.begin(), lst.end(), [](const string& a, const string& b) {
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });
    auto it = lst.begin();
    vector<string> result;
    while (it != lst.end()) {
        if (it->length() % 2 != 0) {
            ++it;
        } else {
            result.push_back(*it);
            ++it;
        }
    }
    return result;