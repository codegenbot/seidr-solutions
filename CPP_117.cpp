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

bool issame(string s1, string s2) {
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    return s1 == s2;
}

vector<string> select_words(string s, int n);

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

int main() {
    string input_str;
    int n;
    cin >> input_str;
    cin >> n;
    vector<string> output = select_words(input_str, n);
    for (string word : output) {
        cout << word << " ";
    }
    cout << endl;
    return 0;
}