vector<int> indicesOfSubstring(const string& text, const string& target) {
    vector<int> result;
    int textSize = text.length(), targetSize = target.length();
    for (int i = 0; ; i++) {
        int j = 0;
        while (i + j < textSize && j < targetSize && text[i + j] == target[j]) {
            j++;
        }
        if (j == targetSize) {
            result.push_back(i);
            i += j - 1;
        } else break;
    }
    return result;
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;
    cout << gcd(num1, num2) << endl;
    
    string text, target;
    cin >> text >> target;
    vector<int> result = indicesOfSubstring(text, target);
    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}