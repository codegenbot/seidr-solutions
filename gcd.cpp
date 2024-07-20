vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int i = 0;
    while ((i = text.find(target, i)) != string::npos) {
        indices.push_back(i);
        i += target.length();
    }
    return indices;
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    cout << gcd(n1, n2) << endl;

    string text, target;
    cin >> text >> target;
    vector<int> result = findIndices(text, target);
    for (int i : result)
        cout << i << " ";
    return 0;
}