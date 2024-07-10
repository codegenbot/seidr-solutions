vector<int> find_indices(string text, string target) {
    vector<int> result;
    int n = text.length(), m = target.length();
    for(int i = 0; i <= n - m; i++) {
        bool found = true;
        for(int j = 0; j < m; j++) {
            if(text[i+j] != target[j]) {
                found = false;
                break;
            }
        }
        if(found) result.push_back(i);
    }
    return result;
}

int gcd(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int n1, n2; 
    cin >> n1 >> n2;
    cout << gcd(n1,n2) << endl;

    string text, target;
    getline(cin, text);
    getline(cin, target);

    vector<int> indices = find_indices(text, target);

    for(int i : indices) {
        cout << i << " ";
    }
    return 0;
}