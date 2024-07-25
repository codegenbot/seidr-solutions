string find_max(vector<string> words){
    string result = *min_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            int count_a = 0;
            for (char c : a) {
                if (c != ' ') {
                    if (!count_a++) {
                        result = a;
                    }
                    else
                        return false;
                }
            }
            if (a.size() > b.size()) {
                return true;
            } else if (a.size() < b.size()) {
                return false;
            } else {
                for (int i = 0; i < a.size(); ++i) {
                    if (a[i] < b[i]) {
                        return true;
                    }
                    else if (a[i] > b[i]) {
                        return false;
                    }
                }
                return false;
            }
        });
    return result;
}