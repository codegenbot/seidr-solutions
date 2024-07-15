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
    // main function code here
    return 0;
}