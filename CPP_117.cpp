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

bool issame(string word1, string word2) {
    return word1 == word2;
}

vector<string> select_words(string s, int n);

int main() {
    // Main function implementation
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