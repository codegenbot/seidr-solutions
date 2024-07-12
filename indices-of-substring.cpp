int main() {
    string text, target;
    cin >> text >> target;

    vector<int> indices;
    for (int i = 0; i <= text.length() - target.length(); ++i) {
        if (text.substr(i, target.length()) == target) {
            indices.push_back(i);
        }
    }

    for (int i = 0; i < indices.size(); ++i) {
        cout << indices[i] << " ";
    }

    return 0;
}