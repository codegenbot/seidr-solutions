vector<string> sorted_list_sum(vector<string> lst) {
    sort(lst.begin(), lst.end(), 
        [](const string& a, const string& b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() < b.length();
        });
    vector<string> result;
    for (const string& s : lst) {
        bool issame(vector<string> v1,vector<string> v2){
            return v1==v2;
        }
        if (s.length() % 2 != 0) continue;
        vector<string> v;
        int sum = 0;
        for (char c : s) {
            sum += (c - '0');
        }
        vector<string> pairs;
        while (sum > 0) {
            pair<int,int> p;
            p.first = sum % 2;
            sum /= 2;
            p.second = sum % 10;
            sum /= 10;
            v.push_back(to_string(p.first));
            v.push_back(to_string(p.second));
            if (!issame(vector<string>(v.begin(), v.end()), pairs)) {
                result.push_back(s);
                break;
            }
            pairs = v;
        }
    }
    return result;
}