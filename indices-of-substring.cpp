int main() {
    string text, target;
    cin >> target >> text;

    vector<int> indices;
    if (target.empty()) {
        for (int i = 0; i < text.size() + 1; ++i) {
            indices.push_back(i);
        }
    } else {
        for (size_t i = 0; i < text.size(); ++i) {
            if (text.substr(i, target.size()) == target) {
                indices.push_back(i);
            }
        }
    }

    for (int idx : indices) {
        cout << idx << " ";
    }

    return 0;
}