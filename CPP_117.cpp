int count_consonants(string word) {
    int count = 0;
    string vowels = "aeiouAEIOU";
    for (char c : word) {
        if (isalpha(c) && vowels.find(c) == string::npos) {
            count++;
        }
    }
    return count;
}

bool issame(string s1, string s2) {
    return s1 == s2;
}

vector<string> select_words(string s, int n);

int main() {
    string input;
    int n;
    getline(cin, input);
    cin >> n;
    vector<string> result = select_words(input, n);
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
            if (count_consonants(word) == n) {
                result.push_back(word);
            }
            word = "";
        } else {
            word += c;
        }
    }
    if (!word.empty() && count_consonants(word) == n) {
        result.push_back(word);
    }
    return result;
}