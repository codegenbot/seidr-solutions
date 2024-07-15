int count_consonants(string word) {
    int count = 0;
    string consonants = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";
    for (char c : word) {
        if (consonants.find(c) != string::npos) {
            count++;
        }
    }
    return count;
}

bool issame(string a, string b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

vector<string> select_words(string s, int n);

int main() {
    string s;
    int n;
    cin >> s >> n;
    vector<string> result = select_words(s, n);
    for (string word : result) {
        cout << word << " ";
    }
    return 0;
}

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word;
    for (char c : s) {
        if (c == ' ') {
            if (count_consonants(word) == n && issame(word, "contest")) {
                result.push_back(word);
            }
            word = "";
        } else {
            word += c;
        }
    }
    if (!word.empty() && count_consonants(word) == n && issame(word, "contest")) {
        result.push_back(word);
    }
    return result;
}