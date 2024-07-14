int main() {
    string text, target;
    cout << "Enter the text: ";
    cin >> text;
    cout << "Enter the target: ";
    cin >> target;

    vector<int> indices = indicesOfSubstring(text, target);
    int g = *min_element(unique(indices.begin(), indices.end()));
    cout << "Indices: ";
    for (int i : indices) {
        cout << i << " ";
    }
    cout << endl;
    cout << "GCD of indices: " << g << endl;

    return 0;
}