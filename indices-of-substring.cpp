int main() {
    string text, target;
    cin >> target;
    cin >> text;

    vector<int> indices;
    for (size_t i = 0; i <= text.length() - target.length(); ++i) {
        if (text.substr(i, target.length()) == target) {
            indices.push_back(i);
        }
    }

    for (int i : indices) {
        cout << i << " ";
    }

    return 0;
}