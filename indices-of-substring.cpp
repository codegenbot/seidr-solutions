void computeLPSArray(string pat, int M, int lps[]) {
    int len = 0;
    lps[0] = 0;
    int i = 1;
    while (i < M) {
        if (pat[i] == pat[len]) {
            len++;
            lps[i] = len;
            i++;
        } else {
            if (len != 0) {
                len = lps[len - 1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }
}

vector<int> findSubstringIndices(string text, string target) {
    int N = text.length();
    int M = target.length();
    vector<int> indices;
    if (M == 0) {
        return indices;
    }

    int lps[M];
    computeLPSArray(target, M, lps);

    int i = 0, j = 0;
    while (i < N) {
        if (target[j] == text[i]) {
            j++;
            i++;
        }
        if (j == M) {
            indices.push_back(i - j);
            j = lps[j - 1];
        } else if (i < N && target[j] != text[i]) {
            if (j != 0) {
                j = lps[j - 1];
            } else {
                i++;
            }
        }
    }
    return indices;
}

int main() {
    string text, target;
    getline(cin, text);
    getline(cin, target);

    vector<int> result = findSubstringIndices(text, target);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    return 0;
}