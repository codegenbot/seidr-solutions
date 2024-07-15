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
    // Main function implementation
}