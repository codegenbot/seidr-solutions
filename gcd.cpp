vector<int> findIndices(string text, string target) {
    vector<int> result;
    int index = 0;
    
    while ((index = text.find(target)) != string::npos) {
        result.push_back(index);
        index += target.length();
    }
    
    return result;
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;

    string text, target;
    cin >> text >> target;
    vector<int> indices = findIndices(text, target);
    
    for (int i : indices) {
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}