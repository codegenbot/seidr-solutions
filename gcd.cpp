```cpp
int main() {
    string text, target;
    cout << "Enter the text: ";
    getline(cin, text);
    cout << "Enter the target: ";
    cin >> target;

    vector<int> indices = indicesOfSubstring(text, target);
    int max_gcd = indices[0]; // Initialize with the first index
    for (int i = 1; i < indices.size(); i++) {
        int g = gcd(indices[i], max_gcd);
        if (g > max_gcd) {
            max_gcd = g;
        }
    }
    cout << "Indices: ";
    for (int i : indices) {
        cout << i << " ";
    }
    cout << endl;
    cout << "GCD of indices: " << max_gcd << endl;

    return 0;
}