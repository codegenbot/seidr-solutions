#include <vector>
#include <string>

int select_words(string str, int n) {
    vector<string> result;
    for (auto i = 0; i < n; i++) {
        string word;
        size_t start = str.find(' ');
        if (start != string::npos) {
            size_t end = str.find(' ', start + 1);
            if (end == string::npos)
                end = str.length();
            word = str.substr(start, end - start);
            str.erase(0, end);
        } else
            break;
        result.push_back(word);
    }
    return result.size();
}

bool issame(vector<string> a, vector<string> b) {
    for (int i = 0; i < min(a.size(), b.size()); i++) {
        if (a[i] != b[i])
            return false;
    }
    return a.size() == b.size();
}