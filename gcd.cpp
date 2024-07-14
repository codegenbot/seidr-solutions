int main() {
    string text, target;
    cout << "Enter the text: ";
    getline(cin, text);
    cout << "Enter the target: ";
    cin >> target;
    cin.ignore(); 
    vector<int> indices = indicesOfSubstring(text, target);

    int minIndex = *min_element(indices.begin(), indices.end());
    cout << "Indices: ";
    for (int i : indices) {
        cout << i << " ";
    }
    cout << endl;
    cout << "GCD of indices: " << gcd(minIndex, minIndex) << endl;

    return 0;
}