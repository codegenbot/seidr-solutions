vector<int> indices(vector<string>& text, string target) {
    vector<int> result;
    int length = target.length();
    for (int i = 0; i <= text[0].length() - length; i++) {
        bool match = true;
        for (int j = 0; j < length; j++) {
            if (text[0][i + j] != target[j]) {
                match = false;
                break;
            }
        }
        if (match) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;
    
    int n;
    cin >> n;
    vector<string> text(n);
    for (int i = 0; i < n; i++) {
        cin >> text[i];
    }
    string target;
    cin >> target;
    vector<int> indices = indices(text, target);
    cout << '[';
    for (int i = 0; i < indices.size(); i++) {
        cout << indices[i];
        if (i < indices.size() - 1) {
            cout << ',';
        }
    }
    cout << ']' << endl;

    return 0;
}

int gcd(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}